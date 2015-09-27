#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    int vowel_count[6] = {0};

    for(i = 0; argv[1][i] != '\0'; i++) {
        char letter = tolower( argv[1][i] );

        switch(letter) {
            case 'a':
                printf("%d: 'A'\n", i);
                vowel_count[0]++;
                break;

            case 'e':
                printf("%d: 'E'\n", i);
                vowel_count[1]++;
                break;

            case 'i':
                printf("%d: 'I'\n", i);
                vowel_count[2]++;
                break;

            case 'o':
                printf("%d: 'O'\n", i);
                vowel_count[3]++;
                break;

            case 'u':
                printf("%d: 'U'\n", i);
                vowel_count[4]++;
                break;

            case 'y':
                if(i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                    vowel_count[5]++;
                    break;
                }

            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    printf( "There are %d A's in your input.\n", vowel_count[0] );
    printf( "There are %d E's in your input.\n", vowel_count[1] );
    printf( "There are %d I's in your input.\n", vowel_count[2] );
    printf( "There are %d O's in your input.\n", vowel_count[3] );
    printf( "There are %d U's in your input.\n", vowel_count[4] );
    printf( "There are %d Y's in your input.\n", vowel_count[5] );

    return 0;
}

