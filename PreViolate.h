#ifndef _PRECOND_VIOLATED_EXCEP
#define _PRECOND_VIOLATED_EXCEP

#include <stdexcept>
#include <string>

using namespace std;

/** @class PrecondViolatedExcep PrecondViolatedExcep.h "PrecondViolatedExcep.h"
 *
 *  Specification for an object thrown on violation of precondition. */
class PreViolate : public logic_error {
 public:

  explicit PreViolate(const string& message = "");

  virtual ~PreViolate() noexcept; //throw();
};

#include "PreViolate.cpp"

#endif
