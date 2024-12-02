#include <iostream>
using namespace std;

int main ( void ) {

    int a, b, c;
    cin >> a >> b >> c;

    int largest = a;

    if ( largest < b ) {
        largest = b;
    }

    if ( largest < c ) {
        largest = c;
    }

    if ( largest == a ) {
        if ( a < (b + c) ) {
            cout << a + b + c << endl;
            return 0;
        }
        else {
            while ( a >= (b + c) ) {
                a--;
            }
        }
    }

    else if ( largest == b) {
        if ( b < (a + c) ) {
            cout << a + b + c << endl;
            return 0;
        }
        else {
            while ( b >= (a + c) ) {
                b--;
            }
        }
    }

    else if ( largest == c) {
        if ( c < (a + b) ) {
            cout << a + b + c << endl;
            return 0;
        }
        else {
            while ( c >= (a + b) ) {
                c--;
            }
        }
    }

    cout << a + b + c << endl;
    
    return 0;
}