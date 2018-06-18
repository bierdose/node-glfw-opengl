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

void GlCreateShader(const FunctionCallbackInfo<Value>& args) {
	GLenum shaderType = args[0]->Uint32Value();
	GLuint shader = glCreateShader(shaderType);
	args.GetReturnValue().Set(shader);
}

void GlShaderSource(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLuint shader = args[0]->Uint32Value();
	String::Utf8Value source(isolate, args[1]->ToString());
	
	char* sourceString = *source;
	
	glShaderSource(shader, 1, &sourceString, NULL);
	args.GetReturnValue().SetUndefined();
}

void GlCompileShader(const FunctionCallbackInfo<Value>& args) {
	GLuint shader = args[0]->Uint32Value();
	glCompileShader(shader);
	args.GetReturnValue().SetUndefined();
}

void GlGetShaderiv(const FunctionCallbackInfo<Value>& args) {
	GLuint shader = args[0]->Uint32Value();
	GLenum pname = args[1]->Uint32Value();
	GLint params;
	glGetShaderiv(shader, pname, &params);
	args.GetReturnValue().Set(params);
}

void GlGetShaderInfoLog(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();
	GLuint shader = args[0]->Uint32Value();
	
	int length;
	char buffer[10240];
	glGetShaderInfoLog(shader, sizeof(buffer), &length, buffer);
	
	Local<String> log = String::NewFromUtf8(isolate, buffer, v8::NewStringType::kNormal, length).ToLocalChecked();
	args.GetReturnValue().Set(log);
}

void GlDeleteShader(const FunctionCallbackInfo<Value>& args) {
	GLuint shader = args[0]->Uint32Value();
	glDeleteShader(shader);
	args.GetReturnValue().SetUndefined();
}

void InitGlShaders(Local<Object> exports) {
	NODE_SET_METHOD(exports, "glCreateShader", GlCreateShader);
	NODE_SET_METHOD(exports, "glShaderSource", GlShaderSource);
	NODE_SET_METHOD(exports, "glCompileShader", GlCompileShader);
	NODE_SET_METHOD(exports, "glGetShaderiv", GlGetShaderiv);
	NODE_SET_METHOD(exports, "glGetShaderInfoLog", GlGetShaderInfoLog);
	NODE_SET_METHOD(exports, "glDeleteShader", GlDeleteShader);
}

}
