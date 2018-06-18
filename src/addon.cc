#include "../lib/glad.h"
#include <GLFW/glfw3.h>

#include <node.h>
#include <node_object_wrap.h>

#include "utils.h"
#include "window.h"
#include "gl.h"
#include "glfw.h"

namespace nodeGlfwOpengl {

using v8::Isolate;
using v8::Local;
using v8::Object;

void init(Local<Object> exports) {
	Isolate* isolate = Isolate::GetCurrent();
	
	Window::Init(exports);
	
	Local<Object> glfwExports = Object::New(isolate);
	InitGlfw(glfwExports);
	exports->Set(v8_str("glfw"), glfwExports);
	
	Local<Object> glExports = Object::New(isolate);
	InitGl(glExports);
	exports->Set(v8_str("gl"), glExports);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, init);

}
