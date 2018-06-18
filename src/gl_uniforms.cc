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

void GlUniform1f(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLfloat v0 = args[1]->NumberValue();
	glUniform1f(location, v0);
	args.GetReturnValue().SetUndefined();
}

void GlUniform2f(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLfloat v0 = args[1]->NumberValue();
	GLfloat v1 = args[2]->NumberValue();
	glUniform2f(location, v0, v1);
	args.GetReturnValue().SetUndefined();
}

void GlUniform3f(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLfloat v0 = args[1]->NumberValue();
	GLfloat v1 = args[2]->NumberValue();
	GLfloat v2 = args[3]->NumberValue();
	glUniform3f(location, v0, v1, v2);
	args.GetReturnValue().SetUndefined();
}

void GlUniform4f(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLfloat v0 = args[1]->NumberValue();
	GLfloat v1 = args[2]->NumberValue();
	GLfloat v2 = args[3]->NumberValue();
	GLfloat v3 = args[4]->NumberValue();
	glUniform4f(location, v0, v1, v2, v3);
	args.GetReturnValue().SetUndefined();
}


void GlUniform1i(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLint v0 = args[1]->Int32Value();
	glUniform1i(location, v0);
	args.GetReturnValue().SetUndefined();
}

void GlUniform2i(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLint v0 = args[1]->Int32Value();
	GLint v1 = args[2]->Int32Value();
	glUniform2i(location, v0, v1);
	args.GetReturnValue().SetUndefined();
}

void GlUniform3i(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLint v0 = args[1]->Int32Value();
	GLint v1 = args[2]->Int32Value();
	GLint v2 = args[3]->Int32Value();
	glUniform3i(location, v0, v1, v2);
	args.GetReturnValue().SetUndefined();
}

void GlUniform4i(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLint v0 = args[1]->Int32Value();
	GLint v1 = args[2]->Int32Value();
	GLint v2 = args[3]->Int32Value();
	GLint v3 = args[4]->Int32Value();
	glUniform4i(location, v0, v1, v2, v3);
	args.GetReturnValue().SetUndefined();
}


void GlUniform1ui(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLuint v0 = args[1]->Uint32Value();
	glUniform1ui(location, v0);
	args.GetReturnValue().SetUndefined();
}

void GlUniform2ui(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLuint v0 = args[1]->Uint32Value();
	GLuint v1 = args[2]->Uint32Value();
	glUniform2ui(location, v0, v1);
	args.GetReturnValue().SetUndefined();
}

void GlUniform3ui(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLuint v0 = args[1]->Uint32Value();
	GLuint v1 = args[2]->Uint32Value();
	GLuint v2 = args[3]->Uint32Value();
	glUniform3ui(location, v0, v1, v2);
	args.GetReturnValue().SetUndefined();
}

void GlUniform4ui(const FunctionCallbackInfo<Value>& args) {
	GLint location = args[0]->Int32Value();
	GLuint v0 = args[1]->Uint32Value();
	GLuint v1 = args[2]->Uint32Value();
	GLuint v2 = args[3]->Uint32Value();
	GLuint v3 = args[4]->Uint32Value();
	glUniform4ui(location, v0, v1, v2, v3);
	args.GetReturnValue().SetUndefined();
}


void InitGlUniforms(Local<Object> exports) {
	NODE_SET_METHOD(exports, "glUniform1f", GlUniform1f);
	NODE_SET_METHOD(exports, "glUniform2f", GlUniform2f);
	NODE_SET_METHOD(exports, "glUniform3f", GlUniform3f);
	NODE_SET_METHOD(exports, "glUniform4f", GlUniform4f);
	
	NODE_SET_METHOD(exports, "glUniform1i", GlUniform1i);
	NODE_SET_METHOD(exports, "glUniform2i", GlUniform2i);
	NODE_SET_METHOD(exports, "glUniform3i", GlUniform3i);
	NODE_SET_METHOD(exports, "glUniform4i", GlUniform4i);
	
	NODE_SET_METHOD(exports, "glUniform1ui", GlUniform1ui);
	NODE_SET_METHOD(exports, "glUniform2ui", GlUniform2ui);
	NODE_SET_METHOD(exports, "glUniform3ui", GlUniform3ui);
	NODE_SET_METHOD(exports, "glUniform4ui", GlUniform4ui);
}

}
