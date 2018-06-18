#include "utils.h"
#include "window.h"

namespace nodeGlfwOpengl {

using v8::Value;
using v8::Local;
using v8::Object;
using v8::Function;
using v8::FunctionCallbackInfo;
using v8::FunctionTemplate;
using v8::Persistent;
using v8::Context;
using v8::Isolate;

Persistent<Function> Window::constructor;

Window::Window() {}

Window::~Window() {}

void Window::Init(Local<Object> exports) {
	Isolate* isolate = exports->GetIsolate();
	
	Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, New);
	tpl->SetClassName(v8_str("Window"));
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	
	constructor.Reset(isolate, tpl->GetFunction());
	exports->Set(v8_str("Window"), tpl->GetFunction());
}

void Window::New(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	
	if (args.IsConstructCall()) {
		Window* window = new Window();
		window->Wrap(args.This());
		args.GetReturnValue().Set(args.This());
	} else {
		Local<Context> context = isolate->GetCurrentContext();
		Local<Function> cons = Local<Function>::New(isolate, constructor);
		Local<Object> result = cons->NewInstance(context, 0, NULL).ToLocalChecked();
		args.GetReturnValue().Set(result);
	}
}

Local<Object> Window::Create(Isolate* isolate) {
	Local<Context> context = isolate->GetCurrentContext();
	Local<Function> cons = Local<Function>::New(isolate, constructor);
	Local<Object> window = cons->NewInstance(context, 0, NULL).ToLocalChecked();
	return window;
}

Window* Window::Unwrap(Local<Object> windowObject) {
	return node::ObjectWrap::Unwrap<Window>(windowObject);
}

}
