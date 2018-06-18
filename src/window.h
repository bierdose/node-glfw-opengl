#ifndef WINDOW_H
#define WINDOW_H

#include <node.h>
#include <node_object_wrap.h>
#include "../lib/glad.h"
#include <GLFW/glfw3.h>

namespace nodeGlfwOpengl {

using v8::Value;
using v8::Local;
using v8::Object;
using v8::FunctionCallbackInfo;
using v8::Function;
using v8::Persistent;
using v8::Isolate;

class Window : public node::ObjectWrap {
	public:
		static void Init(Local<Object> exports);
		static Local<Object> Create(Isolate* isolate);
		static Window* Unwrap(Local<Object> windowObject);
		Persistent<Function> keyCallback;
		GLFWwindow* glfwWindow;
		Isolate* isolate;
	
	private:
		explicit Window();
		~Window();
		
		static void New(const FunctionCallbackInfo<Value>& args);
		static Persistent<Function> constructor;
};
	
}

#endif
