#include <iostream>
using namespace std;

int main () {

    int a, b;
    scanf("%d %d", &a, &b);

    double result = (double)a / (double)b;

    printf("%.20f", result);

    return 0;
}