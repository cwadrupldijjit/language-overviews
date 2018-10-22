from other_file import getMessage
from car import Car

print getMessage()

car = Car()

print car.honk()
print car.honk()
print car.honk()

print car.honkMultipleTimes(8)

def workingWithLists():
    arr = [
        "foo",
        "bar"
    ]

    for item in arr:
        print item

    for i in range(len(arr)):
        print str(i) + ": " + arr[i]

    dictionary = {
        "foo": "bar",
        "key": "value"
    }

    print dictionary['foo']
    print dictionary['key']

workingWithLists()

