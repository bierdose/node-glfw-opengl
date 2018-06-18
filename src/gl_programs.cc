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

void GlCreateProgram(const FunctionCallbackInfo<Value>& args) {
	GLuint program = glCreateProgram();
	args.GetReturnValue().Set(program);
}

void GlAttachShader(const FunctionCallbackInfo<Value>& args) {
	GLuint program = args[0]->Uint32Value();
	GLuint shader = args[1]->Uint32Value();
	glAttachShader(program, shader);
	args.GetReturnValue().SetUndefined();
}

void GlLinkProgram(const FunctionCallbackInfo<Value>& args) {
	GLuint program = args[0]->Uint32Value();
	glLinkProgram(program);
	args.GetReturnValue().SetUndefined();
}

void GlGetProgramiv(const FunctionCallbackInfo<Value>& args) {
	GLuint program = args[0]->Uint32Value();
	GLenum pname = args[1]->Uint32Value();
	GLint params;
	glGetProgramiv(program, pname, &params);
	args.GetReturnValue().Set(params);
}

void GlGetProgramInfoLog(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLuint program = args[0]->Uint32Value();
	
	int length;
	char buffer[10240];
	glGetProgramInfoLog(program, sizeof(buffer), &length, buffer);
	
	Local<String> log = String::NewFromUtf8(isolate, buffer, v8::NewStringType::kNormal, length).ToLocalChecked();
	args.GetReturnValue().Set(log);
}

void GlGetAttribLocation(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLuint program = args[0]->Uint32Value();
	String::Utf8Value name(isolate, args[1]->ToString());
	
	GLint location = glGetAttribLocation(program, *name);
	args.GetReturnValue().Set(location);
}

void GlGetUniformLocation(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLuint program = args[0]->Uint32Value();
	String::Utf8Value name(isolate, args[1]->ToString());
	
	GLint location = glGetUniformLocation(program, *name);
	args.GetReturnValue().Set(location);
}

void GlUseProgram(const FunctionCallbackInfo<Value>& args) {
	GLuint program = args[0]->Uint32Value();
	glUseProgram(program);
	args.GetReturnValue().SetUndefined();
}

void InitGlPrograms(Local<Object> exports) {
	NODE_SET_METHOD(exports, "glCreateProgram", GlCreateProgram);
	NODE_SET_METHOD(exports, "glAttachShader", GlAttachShader);
	NODE_SET_METHOD(exports, "glLinkProgram", GlLinkProgram);
	NODE_SET_METHOD(exports, "glGetProgramiv", GlGetProgramiv);
	NODE_SET_METHOD(exports, "glGetProgramInfoLog", GlGetProgramInfoLog);
	NODE_SET_METHOD(exports, "glGetAttribLocation", GlGetAttribLocation);
	NODE_SET_METHOD(exports, "glGetUniformLocation", GlGetUniformLocation);
	NODE_SET_METHOD(exports, "glUseProgram", GlUseProgram);
}

}
