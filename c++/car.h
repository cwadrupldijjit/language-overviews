#ifndef CAR_H
#define CAR_H
// ^ this stuff is what is called "compiler flags", which are used
// to tell the compiler what you want to do.  In this case, we use
// them to define the "CAR_H" header so that we can use it elsewhere
// and reserve the space for the type later

#include <string>

using namespace std;

// Here is a class definition.  Notice that there are not specific
// implementation details in this file--all of that is found in the
// sibling file "car.cpp".  This file is only used to convey types
// which is mainly useful in knowing what you can and can't do in
// other files that use this code.  When it's compiled, the
// implementation details are unified in the class so that at run-
// time, it will work as expected.
class Car
{
private:
    double honkCount;

public:
    Car();
    string honk();
    string honkMultipleTimes(int num);
    string honkMultipleTimes(double num);
    ~Car();
};

#endif
