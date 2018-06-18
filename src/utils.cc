#include "utils.h"

namespace nodeGlfwOpengl {

v8::Local<v8::Value> v8_num(double x) {
	return v8::Number::New(v8::Isolate::GetCurrent(), x);
}

v8::Local<v8::Integer> v8_int(int32_t x) {
	return v8::Integer::New(v8::Isolate::GetCurrent(), x);
}

v8::Local<v8::Integer> v8_int(v8::Isolate* isolate, int32_t x) {
	return v8::Integer::New(isolate, x);
}

v8::Local<v8::String> v8_str(const char* x) {
	return v8::String::NewFromUtf8(v8::Isolate::GetCurrent(), x, v8::NewStringType::kNormal).ToLocalChecked();
}

v8::Local<v8::String> v8_str(v8::Isolate* isolate, const char* x) {
	return v8::String::NewFromUtf8(isolate, x, v8::NewStringType::kNormal).ToLocalChecked();
}

void v8_throw_type(const char* x) {
	v8::Isolate::GetCurrent()->ThrowException(v8::Exception::TypeError(v8_str(x)));
}

void v8_throw(const char* x) {
	v8::Isolate::GetCurrent()->ThrowException(v8_str(x));
}

void v8_throw(v8::Isolate* isolate, const char* x) {
	isolate->ThrowException(v8_str(x));
}

bool v8_obj_has(v8::Local<v8::Object> obj, const char* key) {
	return obj->Has(v8::Isolate::GetCurrent()->GetCurrentContext(), v8_str(key)).ToChecked();
}

}
