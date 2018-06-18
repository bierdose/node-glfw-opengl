#include "gl.h"

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
using v8::Array;
using v8::ArrayBufferView;

void GlGenBuffers(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLsizei n = args[0]->Int32Value();
	
	std::vector<GLuint> data(n);
	glGenBuffers(n, data.data());
	
	Local<Array> buffers = Array::New(isolate, n);
	for (int i = 0; i < n; i++)
		buffers->Set(i, v8_int(data[i]));
	args.GetReturnValue().Set(buffers);
}

void GlBindBuffer(const FunctionCallbackInfo<Value>& args) {
	GLenum target = args[0]->Uint32Value();
	GLenum buffer = args[1]->Uint32Value();
	glBindBuffer(target, buffer);
	args.GetReturnValue().SetUndefined();
}

void GlBufferData(const FunctionCallbackInfo<Value>& args) {
	GLenum target = args[0]->Uint32Value();
	GLenum usage = args[2]->Uint32Value();
	
	Local<ArrayBufferView> buffer = Local<ArrayBufferView>::Cast(args[1]);
	size_t size = buffer->ByteLength();
	void* data = (void*)((long)buffer->Buffer()->GetContents().Data() + buffer->ByteOffset());
	
	glBufferData(target, size, data, usage);
	args.GetReturnValue().SetUndefined();
}



void InitGlBuffers(Local<Object> exports) {
	NODE_SET_METHOD(exports, "glGenBuffers", GlGenBuffers);
	NODE_SET_METHOD(exports, "glBindBuffer", GlBindBuffer);
	NODE_SET_METHOD(exports, "glBufferData", GlBufferData);
}

}
