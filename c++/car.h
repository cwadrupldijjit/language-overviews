#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car
{
private:
    int honkCount = 0;

public:
    Car();
    string honk();
    string honkMultipleTimes(int num);
    ~Car();
};

#endif
