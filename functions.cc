#include "functions.h"

NAN_METHOD(aString){
 info.GetReturnValue().Set(Nan::New("this is a thing").ToLocalChecked());
}

NAN_METHOD(mem){
 info.GetReturnValue().Set(Nan::GetHeapStatistics().ToLocalChecked());
}