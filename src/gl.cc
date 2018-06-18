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

void GlViewport(const FunctionCallbackInfo<Value>& args) {
	GLint x = args[0]->Int32Value();
	GLint y = args[1]->Int32Value();
	GLsizei width = args[2]->Int32Value();
	GLsizei height = args[3]->Int32Value();
	
	glViewport(x, y, width, height);
	args.GetReturnValue().SetUndefined();
}

void GlClearColor(const FunctionCallbackInfo<Value>& args) {
	GLfloat red = args[0]->NumberValue();
	GLfloat green = args[1]->NumberValue();
	GLfloat blue = args[2]->NumberValue();
	GLfloat alpha = args[3]->NumberValue();
	
	glClearColor(red, green, blue, alpha);
	args.GetReturnValue().SetUndefined();
}

void GlClear(const FunctionCallbackInfo<Value>& args) {
	GLbitfield mask = args[0]->Uint32Value();
	glClear(mask);
	args.GetReturnValue().SetUndefined();
}

void GlGenVertexArrays(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLsizei n = args[0]->Int32Value();
	
	std::vector<GLuint> data(n);
	glGenVertexArrays(n, data.data());
	
	Local<Array> vaos = Array::New(isolate, n);
	for (int i = 0; i < n; i++)
		vaos->Set(i, v8_int(data[i]));
	args.GetReturnValue().Set(vaos);
}

void GlBindVertexArray(const FunctionCallbackInfo<Value>& args) {
	GLuint array = args[0]->Uint32Value();
	glBindVertexArray(array);
	args.GetReturnValue().SetUndefined();
}

void GlVertexAttribPointer(const FunctionCallbackInfo<Value>& args) {
	GLuint index = args[0]->Uint32Value();
	GLint size = args[1]->Int32Value();
	GLenum type = args[2]->Uint32Value();
	GLboolean normalized = args[3]->BooleanValue() ? GL_TRUE : GL_FALSE;
	GLsizei stride = args[4]->Uint32Value();
	size_t/*GLuint*/ offset = args[5]->Uint32Value();
	
	glVertexAttribPointer(index, size, type, normalized, stride, (GLvoid*)offset);
	args.GetReturnValue().SetUndefined();
}

void GlEnableVertexAttribArray(const FunctionCallbackInfo<Value>& args) {
	GLuint index = args[0]->Uint32Value();
	glEnableVertexAttribArray(index);
	args.GetReturnValue().SetUndefined();
}

void GlDrawElements(const FunctionCallbackInfo<Value>& args) {
	GLenum mode = args[0]->Uint32Value();
	GLsizei count = args[1]->Int32Value();
	GLenum type = args[2]->Uint32Value();
	size_t/*GLuint*/ offset = args[3]->Uint32Value();
	
	glDrawElements(mode, count, type, (GLvoid*)offset);
	args.GetReturnValue().SetUndefined();
}

void GlEnable(const FunctionCallbackInfo<Value>& args) {
	GLenum cap = args[0]->Uint32Value();
	glEnable(cap);
	args.GetReturnValue().SetUndefined();
}

void GlFrontFace(const FunctionCallbackInfo<Value>& args) {
	GLenum mode = args[0]->Uint32Value();
	glFrontFace(mode);
	args.GetReturnValue().SetUndefined();
}

void InitGl(Local<Object> exports) {
	InitGlConstants(exports);
	
	NODE_SET_METHOD(exports, "glViewport", GlViewport);
	NODE_SET_METHOD(exports, "glClearColor", GlClearColor);
	NODE_SET_METHOD(exports, "glClear", GlClear);
	
	NODE_SET_METHOD(exports, "glGenVertexArrays", GlGenVertexArrays);
	NODE_SET_METHOD(exports, "glBindVertexArray", GlBindVertexArray);
	NODE_SET_METHOD(exports, "glVertexAttribPointer", GlVertexAttribPointer);
	NODE_SET_METHOD(exports, "glEnableVertexAttribArray", GlEnableVertexAttribArray);
	NODE_SET_METHOD(exports, "glEnable", GlEnable);
	NODE_SET_METHOD(exports, "glFrontFace", GlFrontFace);
	
	
	
	NODE_SET_METHOD(exports, "glDrawElements", GlDrawElements);
	
	InitGlShaders(exports);
	InitGlPrograms(exports);
	InitGlBuffers(exports);
	InitGlUniforms(exports);
}

}
