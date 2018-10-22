<?php

class Car {
    private $honkCount;
    
    public function __construct() {
        $this->honkCount = 0;
    }
    
    public function honk() {
        $this->honkCount++;
        
        return "You honked $this->honkCount times";
    }
    
    public function honkMultipleTimes($num) {
        $this->honkCount += $num;
        
        return "You honked " . $num . " more times for a total of " . $this->honkCount;
    }
}