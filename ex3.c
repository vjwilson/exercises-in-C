#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

  if (argc == 3) {
    int age = atoi(argv[1]);
    int height = atoi(argv[2]);

    printf("I am %d years old.\n", age);
    printf("I am %d centimeters tall.\n", height);
  } else {
    puts("Not enough information given.");
    puts("Usage: ex3 <age in years> <height in centimeters>");
  }

  return 0;
}

