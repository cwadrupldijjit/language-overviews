// Go's code is organized into "packages".  The entry packages
// are always called "main", and you import other packages into
// the main file
package main

import (
	"fmt"

	// Generally, the file structure will determine what the
	// packages are called.  In this case, I'm referencing the
	// "foo" folder next to this one, though you can even put
	// urls in to share code from other sources
	"./car"
	"./foo"
)

func main() {
	// We can access the package because of our import above
	// and from there, we're calling the "GetMessage" method
	fmt.Println(foo.GetMessage())

	// assignment to a new variable happens with the ":="
	// operator and we're calling the "New" method from
	// that file which will give us a new car
	newCar := car.New()

	fmt.Println(newCar.Honk())
	fmt.Println(newCar.Honk())
	fmt.Println(newCar.Honk())

	fmt.Println(newCar.HonkMultipleTimes(8))

	workingWithLists()

	// a really cool thing is also that with Go, you have the
	// option to return two values from a function:
	str, num := returnTwoValues()

	fmt.Println(str, num)
}

func workingWithLists() {
	// Arrays are fixed-length typed lists.
	var arr [2]string

	// the for loop looks similar to JavaScript, just there are
	// no parentheses
	for i := 0; i < len(arr); i++ {
		arr[i] = fmt.Sprintf("foo%d", i)
	}

	// Println supports non-string types, too!
	fmt.Println(arr)

	// a "slice" is typed and requires a length, though you can use
	// the built-in "make" function in order to create one
	slice := make([]string, 0)

	// changes to a slice via the built-in methods follow immutable
	// patterns as they return a new slice each time you call it
	slice2 := append(slice, "foo")
	slice3 := append(slice2, "bar")

	// make sure not to run this code because it will cause a "panic"
	// (which means an exception/error), specifically an "index out
	// of range" panic
	// slice3[2] = "baz"

	// You can copy a slice easily by first creating a new slice:
	slice4 := make([]string, len(slice3))

	// and then copying all of the contents into it:
	copy(slice4, slice3)

	fmt.Println(slice, slice2, slice3, slice4)

	dictionary := make(map[string]string)

	dictionary["foo"] = "bar"
	dictionary["key"] = "value"

	fmt.Println(dictionary)

	// you can test for the existence of an item by using a double-
	// assignment when referencing the dictionary value
	val, exists := dictionary["key"]
	val2, exists2 := dictionary["x"]

	fmt.Println("key", val, exists)
	fmt.Println("x", val2, exists2)

	// This is the map initializer shorthand, the same as the one
	// above using "make"
	dict2 := map[string]string{
		"baz": "quux",
		"key": "value",
	}

	fmt.Println(dict2)
}

func returnTwoValues() (string, int) {
	return "whoa", 42
}
