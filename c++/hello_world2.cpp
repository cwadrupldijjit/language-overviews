#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "other_file.h"
#include "car.h"

using namespace std;

void workingWithLists();

int main(int argc, char const *argv[])
{
    string message = getMessage();
    cout << message << endl;

    Car car;

    cout << car.honk() << endl;
    cout << car.honk() << endl;
    cout << car.honk() << endl;

    cout << car.honkMultipleTimes(8) << endl;

    workingWithLists();

    return 0;
}

void workingWithLists()
{
    string arr[] = { "foo", "foo2" };
    
    for (int iter = 0; iter < 2; iter++) {
        cout << to_string(iter) << ": " << arr[iter] << endl;
    }

    // This will throw an error:
    // cout << arr[2] << endl;

    vector<string> list;

    list.push_back("foo");
    list.push_back("bar");

    
    for(string & str : list)
    {
        cout << str << endl;
    }
    
    map<string, string> dictionary;

    dictionary["foo"] = "bar";
    dictionary["key"] = "value";

    cout << dictionary["foo"] << endl;
    cout << dictionary["key"] << endl;
}
