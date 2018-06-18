"use strict";
const { glfw, gl } = require("..");
const { performance } = require("perf_hooks");

glfw.glfwInit();

glfw.glfwWindowHint(glfw.GLFW_RESIZABLE, 0);
glfw.glfwWindowHint(glfw.GLFW_CONTEXT_VERSION_MAJOR, 3);
glfw.glfwWindowHint(glfw.GLFW_CONTEXT_VERSION_MINOR, 2);
glfw.glfwWindowHint(glfw.GLFW_OPENGL_PROFILE, glfw.GLFW_OPENGL_CORE_PROFILE);
glfw.glfwWindowHint(glfw.GLFW_OPENGL_FORWARD_COMPAT, 1);

let window = glfw.glfwCreateWindow(512, 512, "Hello world");
glfw.glfwSetKeyCallback(window, (key, scancode, action, mods) => {
	if (key == glfw.GLFW_KEY_ESCAPE && action == glfw.GLFW_PRESS)
		glfw.glfwSetWindowShouldClose(window, 1);
});

glfw.glfwMakeContextCurrent(window);
glfw.gladLoadGLLoader();
glfw.glfwSwapInterval(1);

let size = glfw.glfwGetFramebufferSize(window);
gl.glViewport(0, 0, size.width, size.height);

function createShader(type, source) {
	let shader = gl.glCreateShader(type);
	gl.glShaderSource(shader, source);
	gl.glCompileShader(shader);
	
	let status = gl.glGetShaderiv(shader, gl.GL_COMPILE_STATUS);
	if (!status) {
		console.error("compile error!", gl.glGetShaderInfoLog(shader));
		process.exit(1);
	}
	
	return shader;
}

let vertexShader = createShader(gl.GL_VERTEX_SHADER, `
	#version 410
	in vec3 position;
	uniform float time;
	
	mat3 matrix;
	
	void main()
	{
		matrix = mat3(
			vec3(cos(time), -sin(time), 0),
			vec3(sin(time), cos(time), 0),
			vec3(0, 0, 1)
		);
		
		gl_Position = vec4(matrix * position, 1.0f);
	}
`);

let fragmentShader = createShader(gl.GL_FRAGMENT_SHADER, `
	#version 410
	uniform vec4 color;
	out vec4 outColor;
	
	void main() {
		outColor = color;
	}
`);

let program = gl.glCreateProgram();
gl.glAttachShader(program, vertexShader);
gl.glAttachShader(program, fragmentShader);
gl.glLinkProgram(program);
let status = gl.glGetProgramiv(program, gl.GL_LINK_STATUS);
if (!status) {
	console.error("link error!", gl.glGetProgramInfoLog(program));
	process.exit(1);
}

let locations = {
	position: gl.glGetAttribLocation(program, "position"),
	color: gl.glGetUniformLocation(program, "color"),
	time: gl.glGetUniformLocation(program, "time"),
};

let [vao] = gl.glGenVertexArrays(1);
let [vbo, ebo] = gl.glGenBuffers(2);

gl.glBindVertexArray(vao);

const vertices = new Float32Array([
	-0.5, -0.5, 0,
	0.5, -0.5, 0,
	0, 0.5, 0,
]);
gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo);
gl.glBufferData(gl.GL_ARRAY_BUFFER, vertices, gl.GL_STATIC_DRAW);

const indices = new Uint32Array([
	0, 1, 2,
]);
gl.glBindBuffer(gl.GL_ELEMENT_ARRAY_BUFFER, ebo);
gl.glBufferData(gl.GL_ELEMENT_ARRAY_BUFFER, indices, gl.GL_STATIC_DRAW);

gl.glEnableVertexAttribArray(0);
gl.glVertexAttribPointer(locations.position, 3, gl.GL_FLOAT, false, 0, 0);

gl.glBindBuffer(gl.GL_ARRAY_BUFFER, 0);

let frames = 0;
let start = performance.now() / 1000;

function render() {
	if (glfw.glfwWindowShouldClose(window)) {
		glfw.glfwDestroyWindow(window);
		glfw.glfwTerminate();
		process.exit(0);
	}
	
	glfw.glfwPollEvents();
	
	gl.glClearColor(1, 0.2, 0.3, 1.0);
	gl.glClear(gl.GL_COLOR_BUFFER_BIT);
	
	gl.glUseProgram(program);

	let now = performance.now()/1000;
	
	gl.glUniform1f(locations.time, now);
	gl.glUniform4f(locations.color, 1, 1, 0, 1);
	
	gl.glBindVertexArray(vao);
	gl.glDrawElements(gl.GL_TRIANGLES, vertices.length, gl.GL_UNSIGNED_INT, 0);
	gl.glBindVertexArray(0);
	
	glfw.glfwSwapBuffers(window);
	
	frames++;
	let time = performance.now() / 1000;
	if (time - start > 0.5) {;
		let fps = frames / (time - start);
		start = time;
		frames = 0;
		glfw.glfwSetWindowTitle(window, `Hello world - ${fps.toFixed(1)} fps`);
	}
	
	setImmediate(render);
}

setImmediate(render);
