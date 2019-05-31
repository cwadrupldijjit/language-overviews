namespace Csharp.Foo {
    // This class can be instantiated, though!
    public class Car {
        // This is a private field.  In this case, it is also
        // called an "auto property" because we are using the
        // "get"/"set" syntax.
        // These types of properties allow you to have a
        // getter and setter to customize what you do with it.
        // Auto properties are generally public, but in this
        // example, I made it private.
        private int honkCount { get; set; }
        
        // This is the constructor.  By convention (and enforced
        // by the compiler), it must be named exactly the same
        // as the class.
        public Car()
        {
            // Notice we're not using "this".  That is because
            // it knows that "honkCount" is a variable/field on
            // the class.  However, if there were another variable
            // that is named the same, you can use "this" to
            // specify that it is the field on "this" instance,
            // just like in JavaScript.
            honkCount = 0;
        }
        
        // This is a public method.  By convention, we uppercase
        // the name to help us know that it's publicly available.
        public string Honk()
        {
            honkCount++;
            
            // If you want string interpolation, you add a "$"
            // before the first quote for the literal.
            return $"You honked {honkCount} times!";
        }
        
        public string HonkMultipleTimes(int num)
        {
            honkCount += num;
            
            return $"You honked {num} more times for a total of {honkCount}";
        }
    }
}