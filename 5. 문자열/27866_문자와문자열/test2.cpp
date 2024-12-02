#include <iostream>
using namespace std;

int main ( void ) {

    char input[1000];
    int index = 0;

    while ( true ) {
        input[index] = getchar();

        if (input[index] < 'A' || input[index] > 'z') {
            break;
        }

        index++;
    } 

    scanf("%d", &index);

    putchar(input[index - 1]);

    return 0;
}