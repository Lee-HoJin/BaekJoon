#include <cstdio>

int main ( void ) {

    int test_cases = 10;
    int remainder[10];
    int remainder_index = 0;
    int checking = 0;

    for ( int i = 0; i < 10; i++ ) {
        remainder[i] = -1;
    }

    while ( test_cases > 0 ) {
        scanf("%d", &checking);

        int i = 0;
        for ( i = 0; i < remainder_index; i++ ) {
            if ( ( checking % 42 ) == remainder[i] ) {
                break;
            }
        }

        if ( i == remainder_index ) {
            remainder[remainder_index] = checking % 42;
            remainder_index++;
        }

        test_cases--;
    }

    printf("%d\n", remainder_index);
    
    // int count = 0;
    // for ( int i = 0; i < 10; i++ ) {
    //     if ( remainder[i] == -1 ) {
    //         break;
    //     }
    //     else {
    //         count++;
    //     }
    // }
    
    // printf("%d\n", count);

    return 0;
}