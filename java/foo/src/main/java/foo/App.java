package foo;

import foo.blah.Bar;
// If you want to import all the things from a package:
// import foo.blah.*;

public class App 
{
    public static void main( String[] args )
    {
        System.out.println(Second.getMessage());
        System.out.println(Bar.getMessage());
    }
}
