#include <cstdio>

int main () {

    int test_cases, a, b;
    scanf("%d", &test_cases);

    for ( int i = 0; i < test_cases; i++ ) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i + 1, a + b);
    }

    return 0;
}