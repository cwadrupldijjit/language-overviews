#include <string>
#include "other_file.h"

// "string" sticks itself on the "std" namespace, so
// so though we aren't using it otherwise, we still
// will use the std namespace here.
using namespace std;

// Here we have a variable from this file.  It's not
// accessible outside of this file becasue we didn't
// declare it in the header file.
string message = "Hello from the other file!";

// Here we have a public function.  It's public because
// we declared it in the header file.
string getMessage() {
    return message;
}
