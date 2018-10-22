using System;
using Csharp.Foo;

namespace Csharp
{
    class Program2
    {
        static void Main(string[] args)
        {
            Console.WriteLine(OtherFile.GetMessage());
            
            // This is an inferred type.
            var car = new Car();
            // This is an explicit type:
            // Car car = new Car();
            
            Console.WriteLine(car.Honk());
            Console.WriteLine(car.Honk());
            Console.WriteLine(car.Honk());
            
            Console.WriteLine(car.HonkMultipleTimes(8));
            
            WorkingWithLists();
        }
        
        public static void WorkingWithLists()
        {
            // Arrays are very low-level in this language
            string[] arr = new string[2];
            
            // They can only do so much on their own, and though you can
            // define complex array structures, you can't
        }
    }
}
