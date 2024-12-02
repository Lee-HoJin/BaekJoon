#include <iostream>
#include <cstdio>
using namespace std;

int main () {

    char input[5][16];
    char tmp;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 16; j++) {
            input[i][j] = '*';
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 16; j++) {
            scanf("%c", &tmp);

            if ( (tmp >= '0' && tmp <= '9') || (tmp >= 'A' && tmp <= 'z') ) {
                input[i][j] = tmp;
            }
            else if ( (tmp == '\n' || tmp == '\0') && j != 0 ) {
                input[i][j] = '*';
                break;
            }
        }
    }

    for (int j = 0; j < 16; j++) {
        for (int i = 0; i < 5; i++) {
            if ( input[i][j] == '*' ) {
                continue;
            }
            else if ( (input[i][j] >= '0' && input[i][j] <= '9') || (input[i][j] >= 'A' && input[i][j] <= 'z') ) {
                printf("%c", input[i][j]);
            }        
        }
    }
    printf("\n");

    return 0;
}