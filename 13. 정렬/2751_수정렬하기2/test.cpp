#include <stdio.h>
using namespace std;
#include <algorithm>

int main ( void ) {

    int length = 0;
    scanf("%d", &length);

    int *input = new int[length];

    // int input[length];

    for ( int i = 0; i < length; i++ ) {
        scanf("%d", &input[i]);
    }

    sort( input, input + length );

    for ( int i = 0; i < length; i++ ) {
        printf("%d\n", input[i]);
    }

    return 0;
}