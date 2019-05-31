package car

import "fmt"

// Car is a type that holds how many honks we make
// with it
type Car struct {
	honkCount int
}

// New returns a new car object, initializing the
// honkCount member to 0
func New() Car {
	c := Car{}
	c.honkCount = 0

	return c
}

// Honk honks the horn and increments the honkCount,
// sending the new string back
//
// The car object (which we're specifying as the type
// within the first set of parentheses) contains the
// honkCount, and we increment it each time.
// The asterisk before the "Car" identifier says that
// we're using it as a reference; otherwise, we're
// using a thing called "pointers", and the object
// never updates like we expect it to
func (c *Car) Honk() string {
	c.honkCount++
	// fmt.Sprintf is basically the way we're
	// concatenating an int with a string; other ways
	// of doing the same thing are a bit more tricky
	return fmt.Sprintf("You honked %d times", c.honkCount)
}

// HonkMultipleTimes honks the horn incessantly and
// tells you about it
//
// This is like "Honk", but instead accepts a number
// and increments the honkCount by that number
func (c *Car) HonkMultipleTimes(num int) string {
	c.honkCount += num
	return fmt.Sprintf("You honked up to %d more times bringing your total to %d", num, c.honkCount)
}
