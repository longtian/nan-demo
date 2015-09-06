#include "functions.h"

using v8::FunctionTemplate;

NAN_MODULE_INIT(InitAll) {

Nan::Set(target,Nan::New("aString").ToLocalChecked(),
 Nan::GetFunction(Nan::New<FunctionTemplate>(aString)).ToLocalChecked());

Nan::Set(target,Nan::New("mem").ToLocalChecked(),
 Nan::GetFunction(Nan::New<FunctionTemplate>(mem)).ToLocalChecked());

}

NODE_MODULE(NativeExtension, InitAll)