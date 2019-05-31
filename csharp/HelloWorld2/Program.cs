using System;
using System.Collections.Generic;
using System.Linq;
using Csharp.Foo;
// Here we're using a custom namespace in the folder

namespace Csharp
{
    class Program2
    {
        static void Main(string[] args)
        {
            Console.WriteLine(OtherFile.GetMessage());
            
            // This variable is initialized with an inferred type.
            // Any inferred type variable must have an immediate
            // assignment since this language is strongly typed
            var car = new Car();
            // This uses an explicit type:
            // Car car = new Car();
            // and that allows you to declare the variable but not
            // assign it until later.
            
            Console.WriteLine(car.Honk());
            Console.WriteLine(car.Honk());
            Console.WriteLine(car.Honk());
            
            Console.WriteLine(car.HonkMultipleTimes(8));
            
            workingWithLists();
        }
        
        // conventionally, private class members have camelCase names
        // and public members have PascalCase (or TitleCase) names.
        private static void workingWithLists()
        {
            // Arrays are very low-level in this language
            string[] arr = new string[2];
            
            // They can only do so much on their own, and though you can
            // define complex array structures, you must specify a length
            // which is sometimes not as usable when you need a dynamic
            // amount of elements.

            // Otherwise, assignment is just like with JavaScript arrays:
            arr[0] = "foo";
            arr[1] = "foo2";

            // There is a shorthand for the above, too:
            string[] arr2 = {
                "foo",
                "foo2",
            };

            // Similar to Java, there is a foreach loop which is similar
            // to the "for ... in" loop in JavaScript except that it only
            // iterates over an object with an iterator (closer to a
            // "for ... of" loop in JavaScript)
            foreach (var item in arr2) {
                Console.WriteLine(item);
            }

            // Similar to other languages, there is a solution for a
            // variable-length list similar to the arrays in JavaScript
            // called "List":
            var list = new List<string>();

            // Adding an item:
            list.Add("foo");
            // Or multiple:
            list.AddRange(new string[2] { "foo2", "bar" });

            // You can still use bracket notation on these, too:
            Console.WriteLine(list[1]);

            // The List by default doesn't include many of the same higher-
            // order functions like there are on arrays in JavaScript.
            // Instead, they use something called LINQ, which stands for
            // "Language INtegrated Queries".  There are a couple of
            // different syntaxes for it, but for now I'll just show you
            // the one that makes more sense:

            // "map":                    And it supports lambda/arrow functions!
            var selectList = list.Select(item => item + " is the one!");

            // "filter":
            var whereList = list.Where(item => item.Length < 4);

            // "reduce" (numbers only):
            var sumList = list.Sum(item => item.Length);

            // "includes"/"find" (coerce result to boolean):
            var isIncluded = list.Any(item => item == "foo");

            // "forEach" (instead of "foreach" loop)
            list.ForEach(item => Console.WriteLine(item));

            Console.Write("selectList:");
            selectList.ToList().ForEach(item => Console.Write($" {item}"));
            Console.Write("\n");

            Console.Write($"whereList({whereList.Count()}):");
            whereList.ToList().ForEach(item => Console.Write($" {item}"));
            Console.Write("\n");
            
            Console.WriteLine(sumList);
            Console.WriteLine(isIncluded);

            // A JavaScript like object could be made in a couple of different
            // ways.  First is a "Dictionary"
            var dict = new Dictionary<string, string>();

            dict["foo"] = "bar";
            dict["key"] = "value";

            // Dictionaries are iterable so you can iterate through the keys
            // and values in the item:
            foreach (var item in dict) {
                Console.WriteLine("{0}: {1}", item.Key, item.Value);
            }

            // Initializing a dictionary with shorthand
            var dict2 = new Dictionary<string, string>() {
                { "foo", "bar" },
                { "key", "value" },
            };

            dict.ToList().ForEach(item => Console.WriteLine("{0}: {1}", item.Key, item.Value));

            // Another approach for quick objects would be to initialize an
            // "annonymous object":
            var obj = new {
                foo = "bar",
                key = "value",
                age = 42,
            };

            // The advantage of this method is that you can have more than
            // just one type as a value.  Downside is that you can't add any
            // new properties to it after the fact:
            Console.WriteLine(obj.foo);
            Console.WriteLine(obj.key);
            Console.WriteLine(obj.age);
        }
    }
}
