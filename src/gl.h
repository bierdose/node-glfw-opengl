#ifndef GL_H
#define GL_H

#include "../lib/glad.h"
#include <GLFW/glfw3.h>
#include <node.h>
#include "utils.h"

namespace nodeGlfwOpengl {
	
using v8::Local;
using v8::Object;

void InitGl(Local<Object> exports);
void InitGlConstants(Local<Object> exports);
void InitGlShaders(Local<Object> exports);
void InitGlPrograms(Local<Object> exports);
void InitGlBuffers(Local<Object> exports);
void InitGlUniforms(Local<Object> exports);

}

#endif
