// This is a custom sub-namespace.  Sub-namespaces will
// typically follow the directory structure, though you
// have the flexibility to define it to be whatever
// name that you want it.  Sub-namespaces are delimited
// with periods.
namespace Csharp.Foo {
    // Class name is the same as the file.  "static"
    // classes mean that they can't be instantiated but
    // it means that there are methods or fields that
    // will be accessible/usable, too.
    public static class OtherFile {
        public static string GetMessage() {
            return "Hello from the other file!";
        }
    }
}