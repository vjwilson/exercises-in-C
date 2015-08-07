# Exercises in C

I haven't written any C/C++ in quite a while; so, I thought it would be fun to refresh my memory.

## Installation

This repo contains everything you need to build the project on a late-model Mac (with [XCode](https://developer.apple.com/xcode/downloads/) installed).

It _should_ also work on Linux/Unix systems, although it may require some slight modifications.

To install on your local system: 

    git clone git@github.com:vjwilson/exercises-in-C.git
    cd exercises-in-C
    make all

## Running the project

For now, there is only one program, `ex1`. To run it, enter:

    ./ex1
    
This will print "Hello world."

If you give it any command-line arguments, it will instead loop through those arguments and print "Hello `<argN>`" on a separate line.

For example,

    ./ex1 Huey Dewey Louie


will output

    Hello, Huey
    Hello, Dewey
    Hello, Louie

## Modifying the project

If you would like to use this as a base to practice your C/C++, just edit the `ex1.c` file.

Delete the existing executable by running:

    make clean

And then re-build your modified program with:

    make all

## Credit

When I went looking for a good "re-introduction" to C with current development practices, the best resource I found was [Learn C The Hard Way](http://c.learncodethehardway.org/). I started from the exercises in that online book.
