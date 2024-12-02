#include <iostream>
using namespace std;

int main () {

    int a, b, c;
    cin >> a >> b >> c;

    if ( a == b && b == c ) {
        cout << 10000 + ( a * 1000 ) << endl;
    }
    else if ( a == b && b != c ) {
        cout << 1000 + a * 100 << endl;
    }
    else if ( b == c && c != a ) {
        cout << 1000 + b * 100 << endl;
    }
    else if ( c == a && a != b) {
        cout << 1000 + c * 100 << endl;
    }
    else {
        int largest = a;

        if ( largest < b ) {
            largest = b;
        }

        if ( largest < c ) {
            largest = c;
        }

        cout << largest * 100 << endl;
    }

    return 0;
}