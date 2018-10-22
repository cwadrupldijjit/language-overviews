<?php

include(__DIR__ . '/foo/other_file.php');
include(__DIR__ . '/foo/car.php');

// an example of a really strange string syntax
// One of the reasons why I think php syntax is
// unsavory
echo <<<EOS
do something
inside of a multiline string
that doesn't make any sense as to
how it's a string


EOS;

HelloWorld2::main();

class HelloWorld2 {
    public static function main() {
        echo OtherFile::getMessage() . "\n";
        
        $car = new Car();
        
        echo $car->honk() . "\n";
        echo $car->honk() . "\n";
        echo $car->honk() . "\n";
        
        echo $car->honkMultipleTimes(8) . "\n";
        
        self::loopThroughArray();
    }
    
    public static function loopThroughArray() {
        // single-line comment
        # also single-line
        /*
          multiline comment
        */
        
        // Variables are declared with a "$" preceeding them.
        // May seem convenient at first, but it makes it difficult to see where it came from
        $arr = array();
        // $arr = []; // also works
        
        $arr[0] = 'foo';
        $arr[] = 'bar';
        
        print_r($arr); // will give you two elements, one at 0 ('foo'), one at 1 ('bar')
        
        // Instead of requiring a higher-order function like "forEach", it has that built-in
        foreach ($arr as $index => $value) {
            print($index . " " . $value . "\n");
        }
        
        $needle = 'f';
        
        // "higher-order functions" (like JavaScript's "map", "filter", etc.) are all found
        // as general public functions preceeded by "array_" and require the affected array
        // to be passed in first
        $filteredArr = array_filter($arr, function($item) use ($needle) {
            // "strpos" is the equivalent of ".indexOf" in JavaScript, except you need to
            // provide the string as the first argument
            return strpos($item, $needle) !== false;
        });
        
        echo "\nOriginal Array\n";
        print_r($arr);
        echo "\nFiltered Array\n";
        print_r($filteredArr);
        echo "\n";
        
        // The simple objects that could be found in JavaScript can be modeled in PHP as an
        // "associative array".  When you're putting together an array, you can use a string
        // key
        $associativeArray = [
            "key" => "value",
            "also" => "supports trailing commas!",
            "omitting a key assigns the value to an index instead of a key",
        ];
        
        foreach ($associativeArray as $key => $value) {
            echo $key . " " . $value . "\n";
        }
    }
}