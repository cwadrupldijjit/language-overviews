// Each class (at least public class) requires it to be named
// the same as the file it is in
public class HelloWorld {
    // Requires a "main" function
    public static void main(String args[]) {
        // Java is statically typed and requires a type declaration with
        // each function definition and variable declaration requires a
        // type
        String message = "Hello, world!  This is from a Java application.";

        // Effectively the "console.log" for Java
        System.out.println(message);
    }
}