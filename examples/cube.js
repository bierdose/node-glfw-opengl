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
	uniform float u_time;
	in vec4 a_pos;
	out vec4 v_pos;
	
	void main()
	{
		mat3 matrix = 
		mat3(
			vec3(1, 0, 0),
			vec3(0, cos(u_time), -sin(u_time)),
			vec3(0, sin(u_time), cos(u_time))
		)
		*
		mat3(
			vec3(cos(u_time), 0, sin(u_time)),
			vec3(0, 1, 0),
			vec3(-sin(u_time), 0, cos(u_time))
		)
		*
		mat3(
			vec3(cos(u_time), -sin(u_time), 0),
			vec3(sin(u_time), cos(u_time), 0),
			vec3(0, 0, 1)
		);
		
		gl_Position = vec4(matrix * a_pos.rgb, 1);
		v_pos = a_pos;
	}
`);

let fragmentShader = createShader(gl.GL_FRAGMENT_SHADER, `
	#version 410
	uniform vec4 u_color;
	uniform vec3 u_reverseLightDirection;
	in vec4 v_pos;
	out vec4 fragColor;
	
	void main() {
		vec3 fdx = vec3(dFdx(v_pos.x), dFdx(v_pos.y), dFdx(v_pos.z));
		vec3 fdy = vec3(dFdy(v_pos.x), dFdy(v_pos.y), dFdy(v_pos.z));
		vec3 normal = normalize(cross(fdx, fdy));
		
		float light = max(0.0f, dot(normal, u_reverseLightDirection));
		vec4 ambient = u_color * 0.2f;
		
		fragColor = u_color*light + ambient;
		fragColor.a = 1.0f;
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
	position: gl.glGetAttribLocation(program, "a_pos"),
	color: gl.glGetUniformLocation(program, "u_color"),
	reverseLightDirection: gl.glGetUniformLocation(program, "u_reverseLightDirection"),
	time: gl.glGetUniformLocation(program, "u_time"),
};

let [vao] = gl.glGenVertexArrays(1);
let [vbo, ebo] = gl.glGenBuffers(2);

gl.glBindVertexArray(vao);

/*const vertices = new Float32Array([
	1.000000, -1.000000, -1.000000,
	1.000000, 1.000000, -1.000000,
	1.000000, -1.000000, 1.000000,
	1.000000, 1.000000, 1.000000,
	-1.000000, -1.000000, -1.000000,
	-1.000000, 1.000000, -1.000000,
	-1.000000, -1.000000, 1.000000,
	-1.000000, 1.000000, 1.000000,
].map(x => x/2));*/
const vertices = new Float32Array([
	0, 0, 0, // 0
	0, 0, 1, // 1
	0, 1, 0, // 2
	0, 1, 1, // 3
	1, 0, 0, // 4
	1, 0, 1, // 5
	1, 1, 0, // 6
	1, 1, 1, // 7
].map(x => x-0.5));
gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo);
gl.glBufferData(gl.GL_ARRAY_BUFFER, vertices, gl.GL_STATIC_DRAW);

/*const indices = new Uint32Array([
	2, 3, 1,
	4, 7, 3,
	8, 5, 7,
	6, 1, 5,
	7, 1, 3,
	4, 6, 8,
	2, 4, 3,
	4, 8, 7,
	8, 6, 5,
	6, 2, 1,
	7, 5, 1,
	4, 2, 6,
].map(x => x-1));*/
const indices = new Uint32Array([
	0, 4, 6,
	0, 6, 2,
	
	1, 5, 7,
	1, 7, 3,
	
	0, 2, 3,
	0, 3, 1,
	
	4, 6, 7,
	4, 7, 5,
	
	0, 4, 5,
	0, 5, 1,
	
	2, 6, 7,
	2, 7, 3,
]);
gl.glBindBuffer(gl.GL_ELEMENT_ARRAY_BUFFER, ebo);
gl.glBufferData(gl.GL_ELEMENT_ARRAY_BUFFER, indices, gl.GL_STATIC_DRAW);

gl.glEnableVertexAttribArray(0);
gl.glVertexAttribPointer(locations.position, 3, gl.GL_FLOAT, false, 0, 0);

gl.glBindBuffer(gl.GL_ARRAY_BUFFER, 0);

gl.glEnable(gl.DEPTH_TEST);
gl.glEnable(gl.CULL_FACE);

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
	gl.glClear(gl.GL_COLOR_BUFFER_BIT | gl.GL_DEPTH_BUFFER_BIT);
	
	gl.glUseProgram(program);

	let now = performance.now()/1000;
	
	gl.glUniform1f(locations.time, now);
	gl.glUniform4f(locations.color, 1, 1, 0, 1);
	gl.glUniform3f(locations.reverseLightDirection, 0.5, 0.7, 1);
	
	gl.glBindVertexArray(vao);
	gl.glDrawElements(gl.GL_TRIANGLES, indices.length, gl.GL_UNSIGNED_INT, 0);
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
