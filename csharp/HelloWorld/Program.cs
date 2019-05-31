using System;
// This allows us to use anything on the "System"
// namespace such as Math, Array, Decimal, Char,
// String, etc.  It basically give you access to
// any type built into the language itself, though
// you don't actually need it for this example.
// If we omitted the above line, then we could
// still use the things that are on the System
// namespace, but we'd have to put a "System."
// before all of the references, so this allows
// us to clean up our code a bit.


// "namespace"s are logical groupings of code.
// Anything "public" inside of the namespace is
// available to any non-namespace code that wants
// to reference it (aka, an "API").

// You can organize your code in namespaces and
// sub-namespaces when you work on your project
// to make it easier to understand where an item
// comes from.  You add to a namespace in any
// file at any time by specifying it like below
// and putting things into it.
namespace Csharp
{
    // Typically, each file has only one item it adds
    // to a namespace and conventionally, you name the
    // item the same as the file (or vice versa).
    // Since C# is an object-oriented language, the
    // type it uses most is a class, though you'll also
    // see interfaces and enums used, too.
    class Program
    {
        // The field listed below has three things before its
        // name: "public", "static", "string".
        //   - "public" means that it can be used by anybody
        //     outside of itself
        //   - "static" means that you don't use it on an
        //     instance of that class but off of the class
        //     itself (i.e., "Program.Message" instead of
        //     "var p = new Program(); p.Message;")
        //   - "string" is the type that this variable/field
        //     will have
        // We'll see some other ones later.
        public static string Message = "Hello, World!";
        
        // Similar to C#, Java, or Go, the program cannot run
        // unless it starts in this "Main" function.  Nothing
        // runs unless Main calls it somewhere in its body or
        // something is called from something that was called
        // from inside of the "Main" body, etc.  You can also
        // see that like C#, it accepts args which are any
        // string values passed in from the command-line.
        static void Main(string[] args)
        {
            // Gee, I wonder what this does? ;)
            Console.WriteLine(Message);
        }
    }
}
