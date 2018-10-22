namespace Csharp.Foo {
    public class Car {
        private int HonkCount { get; set; }
        
        public Car()
        {
            HonkCount = 0;
        }
        
        public string Honk()
        {
            HonkCount++;
            
            return $"You honked {HonkCount} times!";
        }
        
        public string HonkMultipleTimes(int num)
        {
            HonkCount += num;
            
            return $"You honked {num} more times for a total of {HonkCount}";
        }
    }
}