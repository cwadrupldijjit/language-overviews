class Car
    @@honkCount

    def initialize
        @@honkCount = 0
    end

    def honk
        @@honkCount += 1

        "You honked #{@@honkCount} times"
    end

    def honkMultipleTimes(num)
        @@honkCount += num

        'You honked up to ' + num.to_s + ' more times bringing your total to ' + @@honkCount.to_s
    end
end