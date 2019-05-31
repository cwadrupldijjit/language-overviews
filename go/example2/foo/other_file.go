package foo

// GetMessage gets a message from the other_file
//
// Anything that starts with an uppercase letter is
// automatically exported from a package
func GetMessage() string {
	return "Hello from the other file!"
}
