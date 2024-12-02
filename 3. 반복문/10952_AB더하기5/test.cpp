#include <iostream>
using namespace std;

int main ( void ) {

    int a, b;

    while (1) {
        cin >> a >> b;
        if ( a == b && a == 0) {
            return 0;
        }
        else {
            cout << a + b << endl;
        }
    }

    return 0;
}