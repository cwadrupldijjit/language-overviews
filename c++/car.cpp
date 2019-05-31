#include <string>
#include "car.h"
// In order for the implementation details to be assigned,
// the header file for the Car class needs to be included.
// Notice that it has quotes around it instead of "<" and
// ">".  This is because the "<"/">" denote that it's
// coming from an external lib, typically from the compiler
// "lib" folder.  With our local header file, we could use
// the quotes because it's local

// NOTE ABOUT <string>:
// Strings in C++ (and many other programming languages) are
// actually objects, not primitives.  This is because they
// are immutable character arrays under the hood.  As such,
// they aren't in the C++ runtime by default and you have
// to #include it specifically.


// Method definitions are assigned in this file, using the
// "::" operator to specify assignment to the particular
// class.  It requires a type before it to explain a return
// type for the function
string Car::honk()
{
    // referring to the instance of an object is just the same
    // as in JavaScript but uses an arrow instead of a period
    this->honkCount++;

    // It isn't always needed, however; depends on what you
    // need to do with it or if there is ambiguity as to which
    // variable you're trying to use
    return "You honked " + to_string(honkCount) + " times";
}

// parameters also need a type preceeding it
string Car::honkMultipleTimes(int num)
{
    this->honkCount += num;

    return "You honked up to " + to_string(num) +
        " more times bringing your total to " + to_string(honkCount);
}

// This is what is called "overloading", which essentially
// means that you want to have the same-named function that
// does slightly different things based off the input, and
// it may or may not return something completely different
string Car::honkMultipleTimes(double num)
{
    this->honkCount += num;

    return "You honked up to " + to_string(num) + " more times bringing your total to " + to_string(honkCount);
}

// This is the constructor.  It is named the exact same
// as the class it's in, a convention required by the
// runtime and the compiler
Car::Car() {
    this->honkCount = 0;
}

// This is the "deconstructor".  It is named the exact
// same as the class, but it has a tilde (~) before the
// name, which is a convention required by the runtime
// and compiler, and is crucial to memory management
Car::~Car() {}