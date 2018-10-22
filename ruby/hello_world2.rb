require "ostruct"
require_relative "other_file"
require_relative "car"

puts getMessage()

car = Car.new

puts car.honk
puts car.honk
puts car.honk

puts car.honkMultipleTimes 8

def workingWithLists
    arr = Array.new
    # also can be used:
    # arr = [ 'foo', 'foo2' ]

    arr.push('foo')
    arr << 'foo2'

    arr.each { |item| puts item }

    for i in 0..(arr.length - 1)
        puts "#{i}: #{arr[i]}"
    end

    obj = OpenStruct.new(:foo => 'bar', :key => 'value')

    obj.baz = 'quux'

    puts obj.foo
    puts obj.key
    puts obj.baz
end

workingWithLists