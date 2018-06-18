#ifndef GLFW_H
#define GLFW_H

#include "../lib/glad.h"
#include <GLFW/glfw3.h>
#include <node.h>
#include "utils.h"
#include "window.h"

namespace nodeGlfwOpengl {
	
using v8::Local;
using v8::Object;

void InitGlfw(Local<Object> exports);

}

#endif
