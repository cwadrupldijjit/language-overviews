public class Car {
    private int honkCount;

    // constructor
    public Car() {
        honkCount = 0;
    }

    public String honk() {
        honkCount++;

        return "You honked " + honkCount + " times";
    }

    public String honkMultipleTimes(int num) {
        honkCount += num;

        return "You honked up to " + num + " more times bringing your total to " + honkCount;
    }
}