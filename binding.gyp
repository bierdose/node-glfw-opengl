{
	"targets": [
		{
			"target_name": "addon",
			"sources": [
				"src/addon.cc",
				"src/glfw.cc",
				"src/window.cc",
				"src/gl.cc",
				"src/gl_constants.cc",
				"src/gl_shaders.cc",
				"src/gl_programs.cc",
				"src/gl_buffers.cc",
				"src/gl_uniforms.cc",
				"src/utils.cc",
				"lib/glad.c"
			],
			"conditions": [
				['OS=="mac"', {
					"libraries": [
						"-lglfw3",
						"-framework Cocoa",
						"-framework OpenGL"
					]
				}]
			]
		}
	]
}
