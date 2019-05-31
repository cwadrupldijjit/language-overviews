from other_file import get_message
from car import Car

print(get_message())

car = Car()

print(car.honk())
print(car.honk())
print(car.honk())

print(car.honk_multiple_times(8))

def working_with_lists():
    arr = [
        "foo",
        "bar"
    ]

    for item in arr:
        print(item)

    for i in range(len(arr)):
        print(str(i) + ": " + arr[i])

    foo = 'foo'

    dictionary = {
        foo: "bar",
        "key": "value"
    }

    print(dictionary['foo'])
    print(dictionary['key'])

working_with_lists()

