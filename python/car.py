class Car:
    __honkCount = 0

    def __init__(self):
        self.__honkCount = 0
    
    def honk(self):
        self.__honkCount += 1

        return "You honked " + str(self.__honkCount) + " times"

    def honkMultipleTimes(self, num):
        self.__honkCount += num

        return "You honked up to " + str(num) + " more times bringing your total to " + str(self.__honkCount)