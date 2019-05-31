// Grabbing things from other files that aren't in the
// current package (the current package is annonymous
// since we haven't defined it) requires you to
// "import" it.
// In this case, we're bringing in the following four
// classes found in the "java.util" package and no
// more:
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// The following import is bringing in everything from
// a package declared in this project.  
import subpackage.*;

public class HelloWorld2 {
    public static void main(String args[]) {
        String message = OtherFile.getMessage();

        System.out.println(message);

        Car car = new Car();

        System.out.println(car.honk());
        System.out.println(car.honk());
        System.out.println(car.honk());

        System.out.println(car.honkMultipleTimes(8));

        workingWithLists();
    }

    public static void workingWithLists() {
        String[] arr = new String[2];

        // arrays are difficult to deal with in Java (and many other languages)
        // because they're so low-level. There are no higher-order functions or
        // even expandable slots you can use.
        for (int i = 0; i < arr.length; i++) {
            arr[i] = "foo" + Integer.toString(i);
        }

        try {
            // If you try to use or reference an index that doesn't exist inside
            // of the array, then an error will be thrown.
            System.out.println(arr[2]);
        } catch (Exception e) {
            System.out.println("ERROR - Tried to access an index that doesn't exist!");
            System.out.println(e.getMessage());
        }

        // And that's why we have lists!
        List<String> list = new ArrayList<String>();

        // Similar to the Array.prototype.push() in JavaScript, you can add as
        // many elements to the list as you want
        list.add("foo");
        list.add("bar");

        // for each item
        for (String item : list) {
            System.out.println(item);
        }

        // cannot have an index unless you provide it yourself
        int i = 0;
        for (String item : list) {
            System.out.println(i + " " + item);
            i++;
        }

        // Dynamic Java objects like JavaScript are harder to deal with. Specifically,
        // you need to get to know about "Maps". "Maps" are similar in concept to
        // "Dictionaries" in other languages
        Map<String, String> dictionary = new HashMap<String, String>();

        // Assign the value "bar" to the property "foo"
        dictionary.put("foo", "bar");
        dictionary.put("key", "value");

        // Get the value in the property "foo"
        System.out.println(dictionary.get("foo"));
        System.out.println(dictionary.get("key"));
    }
}