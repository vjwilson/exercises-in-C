#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;
    int MAX_NUM_STATES = 4;
    char* states[MAX_NUM_STATES];
    int actual_num_states = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    while ( i < argc && i <= MAX_NUM_STATES ) {
        printf("arg %d: %s\n", i, argv[i]);
        states[i - 1] = argv[i];
        i++;
    }
    actual_num_states = i - 1;

    for( i = 0; i < actual_num_states; i++ ) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}

