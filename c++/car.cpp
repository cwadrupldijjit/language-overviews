#include <string>
#include "car.h"

string Car::honk()
{
    this->honkCount++;

    return "You honked " + to_string(honkCount) + " times";
}

string Car::honkMultipleTimes(int num)
{
    this->honkCount += num;

    return "You honked up to " + to_string(num) + " more times bringing your total to " + to_string(honkCount);
}

Car::Car() {

}

Car::~Car() {}