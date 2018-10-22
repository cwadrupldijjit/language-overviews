<?php

class HelloWorld {
    const message = "Hello, World!";
    
    public static function main() {
        echo self::message;
    }
}

HelloWorld::main();