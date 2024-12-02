#include <iostream>
using namespace std;

int main () {

    int a, b;
    cin >> a >> b;
    
    cout << fixed;
    cout.precision(12);
    cout << (double)a / (double)b;

    return 0;
}