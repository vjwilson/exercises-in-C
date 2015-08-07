#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

  if (argc > 1) {
    for (int i=1; i < argc; i++) {
      char greeting[255] = "Hello, ";
      strcat(greeting, argv[i]);
      puts(greeting);
    }
  } else {
    puts("Hello world.");
  }

  return 0;
}

