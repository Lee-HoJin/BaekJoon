#include <stdio.h>

int main ( void ) {

    int size;
    scanf("%d\n", &size);

    int *counting_sort = new int[10000];
    // int *input = new int[size];

    int tmp;

    for ( int i = 0; i < size; i++ ) {
        scanf("%d", &tmp );
        counting_sort[ tmp - 1 ]++;
    }

    for ( int i = 0; i < 10000; i++ ) {
        if ( counting_sort[i] != 0 ) {
            for ( int j = 0; j < counting_sort[i]; j++ ) {
                printf("%d\n", i + 1);
            }
        }
    }

    return 0;
}