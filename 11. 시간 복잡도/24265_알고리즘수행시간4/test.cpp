#include <iostream>
using namespace std;

int main ( void ) {

    double n = 0;
    cin >> n;

    if ( n == 1 ) {
        cout << 0 << endl << 2 << endl;
        return 0;
    }

    cout.precision(15);
    cout<< ( ( n ) * ( n - 1 ) ) / 2 << endl << 2 << endl;

    return 0;
}