#ifndef UTILS_H
#define UTILS_H

#include <node.h>

#define EXPORT_CONSTANT(x) exports->Set(v8_str(#x), v8_int(x));

namespace nodeGlfwOpengl {

v8::Local<v8::Value> v8_num(double x);
v8::Local<v8::Integer> v8_int(int32_t x);
v8::Local<v8::Integer> v8_int(v8::Isolate* isolate, int32_t x);
v8::Local<v8::String> v8_str(const char* x);
v8::Local<v8::String> v8_str(v8::Isolate* isolate, const char* x);
void v8_throw_type(const char* x);
void v8_throw(const char* x);
void v8_throw(v8::Isolate* isolate, const char* x);
bool v8_obj_has(v8::Local<v8::Object> obj, const char* key);

}

#endif
