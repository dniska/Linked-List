#include "PreViolate.h"

PreViolate::PreViolate(const string& message)
  : logic_error(message.c_str() ) {
}

PreViolate::~PreViolate()
noexcept { //throw() {
}
