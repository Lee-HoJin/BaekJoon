#include <cstdio>

int main () {

    int test_cases, a, b;
    scanf("%d", &test_cases);

    while (test_cases > 0) {
        scanf("%d %d", &a, &b);

        printf("%d\n", a + b);

        test_cases--;
    }

    return 0;
}