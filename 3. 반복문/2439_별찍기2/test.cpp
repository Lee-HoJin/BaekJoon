#include <cstdio>

int main ( void ) {

    int N;
    scanf("%d", &N);

    for ( int i = 0; i < N; i++) {
        for ( int k = N - i; k > 0 + 1; k--) {
            printf(" ");
        }
        for ( int k = 0; k < i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}