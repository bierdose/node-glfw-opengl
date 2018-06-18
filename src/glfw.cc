#include "glfw.h"

namespace nodeGlfwOpengl {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;
using v8::Exception;
using v8::Context;
using v8::Null;

void globalKeyCallback(GLFWwindow* glfwWindow, int key, int scancode, int action, int mods) {
	Window* window = (Window*)glfwGetWindowUserPointer(glfwWindow);
	Isolate* isolate = window->isolate;
	
	const unsigned int argc = 4;
	Local<Value> argv[argc] = {
		v8_int(isolate, key),
		v8_int(isolate, scancode),
		v8_int(isolate, action),
		v8_int(isolate, mods)
	};
	
	window->keyCallback.Get(isolate)->Call(Null(isolate), argc, argv);
}

void errorCallback(int error, const char* description) {
	auto message = std::string("Error: ") + description;
	v8_throw(message.c_str());
}

void GlfwInit(const FunctionCallbackInfo<Value>& args) {
	glfwSetErrorCallback(errorCallback);
	
	if (!glfwInit()) {
		v8_throw("can't initialize glfw");
	}
		
	args.GetReturnValue().SetUndefined();
}

void GlfwWindowHint(const FunctionCallbackInfo<Value>& args) {
	int hint = args[0]->Uint32Value();
	int value = args[1]->Uint32Value();
	
	glfwWindowHint(hint, value);
	
	args.GetReturnValue().SetUndefined();
}

void GlfwCreateWindow(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	
	int width = args[0]->Uint32Value();
	int height = args[1]->Uint32Value();
	String::Utf8Value title(isolate, args[2]);
	
	GLFWwindow* glfwWindow = glfwCreateWindow(width, height, *title, NULL, NULL);
	if (!glfwWindow) {
		v8_throw("can't create window");
		args.GetReturnValue().SetUndefined();
		return;
	}
	
	Local<Object> windowObject = Window::Create(isolate);
	Window* window = Window::Unwrap(windowObject);
	window->glfwWindow = glfwWindow;
	window->isolate = isolate;
	
	// TODO: keep map with Persistent references
	glfwSetWindowUserPointer(glfwWindow, (void*)window);
	
	args.GetReturnValue().Set(windowObject);
}

void GlfwSetKeyCallback(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	
	Window* window = Window::Unwrap(args[0]->ToObject());
	Local<Function> callback = Local<Function>::Cast(args[1]);
	
	window->keyCallback.Reset(isolate, callback);
	
	glfwSetKeyCallback(window->glfwWindow, globalKeyCallback);
	
	args.GetReturnValue().SetUndefined();
}

void GlfwSetWindowShouldClose(const FunctionCallbackInfo<Value>& args) {
	GLFWwindow* window = Window::Unwrap(args[0]->ToObject())->glfwWindow;
	int value = args[1]->Uint32Value();
	
	glfwSetWindowShouldClose(window, value);
	
	args.GetReturnValue().SetUndefined();
}

void GlfwMakeContextCurrent(const FunctionCallbackInfo<Value>& args) {
	GLFWwindow* window = Window::Unwrap(args[0]->ToObject())->glfwWindow;
	glfwMakeContextCurrent(window);
	args.GetReturnValue().SetUndefined();
}

// TODO: move
void GladLoadGLLoader(const FunctionCallbackInfo<Value>& args) {
	gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
	args.GetReturnValue().SetUndefined();
}

void GlfwGetFramebufferSize(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	
	GLFWwindow* window = Window::Unwrap(args[0]->ToObject())->glfwWindow;
	
	int width, height;
	glfwGetFramebufferSize(window, &width, &height);
	
	Local<Object> size = Object::New(isolate);
	size->Set(v8_str("width"), v8_int(width));
	size->Set(v8_str("height"), v8_int(height));
	args.GetReturnValue().Set(size);
}

void GlfwWindowShouldClose(const FunctionCallbackInfo<Value>& args) {
	GLFWwindow* window = Window::Unwrap(args[0]->ToObject())->glfwWindow;
	int result = glfwWindowShouldClose(window);
	args.GetReturnValue().Set(v8_int(result));
}

void GlfwDestroyWindow(const FunctionCallbackInfo<Value>& args) {
	// TODO: cleanup of references
	GLFWwindow* window = Window::Unwrap(args[0]->ToObject())->glfwWindow;
	glfwDestroyWindow(window);
	args.GetReturnValue().SetUndefined();
}

void GlfwTerminate(const FunctionCallbackInfo<Value>& args) {
	// TODO: cleanup of references
	glfwTerminate();
	args.GetReturnValue().SetUndefined();
}

void GlfwSwapInterval(const FunctionCallbackInfo<Value>& args) {
	int interval = args[0]->Uint32Value();
	glfwSwapInterval(interval);
	args.GetReturnValue().SetUndefined();
}

void GlfwPollEvents(const FunctionCallbackInfo<Value>& args) {
	glfwPollEvents();
	args.GetReturnValue().SetUndefined();
}

void GlfwSwapBuffers(const FunctionCallbackInfo<Value>& args) {
	GLFWwindow* window = Window::Unwrap(args[0]->ToObject())->glfwWindow;
	glfwSwapBuffers(window);
	args.GetReturnValue().SetUndefined();
}

void GlfwSetWindowTitle(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLFWwindow* window = Window::Unwrap(args[0]->ToObject())->glfwWindow;
	String::Utf8Value title(isolate, args[1]);
	
	glfwSetWindowTitle(window, *title);
	args.GetReturnValue().SetUndefined();
}

void InitGlfw(Local<Object> exports) {
	EXPORT_CONSTANT(GLFW_RESIZABLE)
	EXPORT_CONSTANT(GLFW_CONTEXT_VERSION_MAJOR)
	EXPORT_CONSTANT(GLFW_CONTEXT_VERSION_MINOR)
	EXPORT_CONSTANT(GLFW_OPENGL_PROFILE)
	EXPORT_CONSTANT(GLFW_OPENGL_CORE_PROFILE)
	EXPORT_CONSTANT(GLFW_OPENGL_FORWARD_COMPAT)
	EXPORT_CONSTANT(GLFW_KEY_ESCAPE)
	EXPORT_CONSTANT(GLFW_PRESS)
	
	NODE_SET_METHOD(exports, "glfwInit", GlfwInit);
	NODE_SET_METHOD(exports, "glfwWindowHint", GlfwWindowHint);
	NODE_SET_METHOD(exports, "glfwCreateWindow", GlfwCreateWindow);
	NODE_SET_METHOD(exports, "glfwSetKeyCallback", GlfwSetKeyCallback);
	NODE_SET_METHOD(exports, "glfwSetWindowShouldClose", GlfwSetWindowShouldClose);
	NODE_SET_METHOD(exports, "glfwMakeContextCurrent", GlfwMakeContextCurrent);
	NODE_SET_METHOD(exports, "glfwGetFramebufferSize", GlfwGetFramebufferSize);
	NODE_SET_METHOD(exports, "glfwWindowShouldClose", GlfwWindowShouldClose);
	NODE_SET_METHOD(exports, "glfwDestroyWindow", GlfwDestroyWindow);
	NODE_SET_METHOD(exports, "glfwTerminate", GlfwTerminate);
	NODE_SET_METHOD(exports, "glfwSwapInterval", GlfwSwapInterval);
	NODE_SET_METHOD(exports, "glfwPollEvents", GlfwPollEvents);
	NODE_SET_METHOD(exports, "glfwSwapBuffers", GlfwSwapBuffers);
	NODE_SET_METHOD(exports, "glfwSetWindowTitle", GlfwSetWindowTitle);
	
	NODE_SET_METHOD(exports, "gladLoadGLLoader", GladLoadGLLoader);
}

}
