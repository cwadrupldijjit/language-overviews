#include <iostream>
// C++ is very light as far as what it gives you by default
// That's why you need to #include other files that help to
// complete what you're trying to do.  In this case, I
// needed to include <iostream> because that's how I can
// log things out to the console among other things.


// No code can run in this application unless it is inside of
// or called from the "main" function.
int main() {
    // "std" is a namespace (or a logical grouping) of code
    // which exposes an API for you to use.  For instance,
    // this is using "cout" and "endl".
    // "cout" stands for "console out" and is a stream that
    // writes to the console.  There is a sibling stream
    // called "cin" which accepts input from the command
    // line.
    // "endl" is actually a function whose purpose in this
    // case is to add an "\n" to the end, though it's more
    // useful to use than just "\n" in case the new line
    // uses a different character or set of characters.
    std::cout << "Hello, World!" << std::endl;
}