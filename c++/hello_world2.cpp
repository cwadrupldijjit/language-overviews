#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "other_file.h"
#include "car.h"
// You'll see that we're including other files in here now
// You'll see how they're used later.

// This line of code is useful if we want to use parts of
// the "std" api without prefixing it with "std::"
using namespace std;

// This is a function signature.  It doesn't contain any
// implementation details, but is used to ensure that any
// function declared later in the file than the currently-
// running function doesn't trigger a fatal exception.
// This is roughly like "hoisting" in JavaScript, just not
// automatic.
void workingWithLists();

// Though we don't use them, you can see that the "main"
// function is accepting two arguments: "argc" and "argv".
// These are arguments that are passed to your code from
// the command line.  More about this later
int main(int argc, char const *argv[])
{
    // This "getMessage" function is being included via
    // the "other_file.h" inclusion above
    string message = getMessage();
    cout << message << endl;

    // In order to instantiate a new car, all you have to
    // do is declare a variable, specifying as a type the
    // "Car" class.  No "new" necessary
    Car car;

    cout << car.honk() << endl;
    cout << car.honk() << endl;
    cout << car.honk() << endl;

    cout << car.honkMultipleTimes(8) << endl;

    workingWithLists();

    // also particular to C++; if you "return" something from
    // the "main" function, it will be the exit code when the
    // program ends.  "0" means it was successful; everything
    // else typically means it was either killed by an external
    // source (-1) or it was killed partway through the program
    // (>= 1).  Omitting it implicitly returns a "0"
    return 0;
}

void workingWithLists()
{
    // Initializing an array is somewhat like in JavaScript.
    // You specify the type that should be contained in the
    // array and then you give the variable a name followed
    // by "[]".  If you put a number inside of those, it will
    // initialize the array with that length; leaving it out
    // means you need to use the shorthand you see below or
    // it will throw an error.  Arrays need to have a specific
    // length.
    string arr[] = { "foo", "foo2" };
    // string arr[2];
    
    // iterating through it like normal
    for (int iter = 0; iter < 2; iter++) {
        cout << to_string(iter) << ": " << arr[iter] << endl;
    }

    // This will throw an error:
    // cout << arr[2] << endl;

    // Similar to arrays are vectors.  They are able to
    // dynamically allocate spaces in memory, unlike arrays
    // who need to know immediately how much space they need
    // to allocate in memory.
    // You'll also notice the "<" and ">".  In this case, they
    // denote what is called a "generic", which is a way to
    // provide a type after the fact.  This is necessary to
    // make a bit more dynamic code than before.
    vector<string> list;

    // Notice we didn't specify a length and we can push to
    // it like in JavaScript.  We can do this as many times
    // as we need to.
    list.push_back("foo");
    list.push_back("bar");

    // Instead of a for loop like above, we can specify a
    // variable, explain we want a reference to it, and
    // provide the vector (or something that implements an
    // "iterator") that we want it to iterate over.
    for(string& str : list)
    {
        cout << str << endl;
    }
    

    // As far as "dynamic" objects are concerned, we must use
    // a "map".  This allows some useful dynamics in adding
    // properties and deleting properties at-will, but we
    // run into a problem with the fact that it can only ever
    // be a map between one type and another.  As such, we
    // need to set up a specific class that can hold other
    // types of data than just "strings" if we need anything
    // more than this.
    // We're also using a generic here which takes two types
    // instead of one.  This is because we can specify any
    // type we want to be the "keys" and "values" (imagine
    // number keys with string values or object keys with
    // number values or whatever)
    map<string, string> dictionary;

    // bracket notation is required to access or assign
    dictionary["foo"] = "bar";
    dictionary["key"] = "value";

    cout << dictionary["foo"] << endl;
    cout << dictionary["key"] << endl;
}
