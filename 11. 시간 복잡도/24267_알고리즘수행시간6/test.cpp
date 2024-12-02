#include <iostream>
using namespace std;

int main ( void ) {

    long long n, sum = 0, adder = 2;
    cin >> n;

    if ( n < 3 ) {
        cout << 0 << endl << 3 << endl;
    }

    n -= 2;

    while (n--) {
        sum += adder;
        adder++;
    }

    cout << sum << endl << 3 << endl;

    // int count = 0;
    // for ( int i = 1; i < n - 1; i++ ) {
    //     for ( int j = i + 1; j < n; j++ ) {
    //         for ( int k = j + 1; k < n + 1; k++ ) {
    //             cout << "i: " << i << " j: " << j << " k: " << k << endl;
    //             count++;
    //         }
    //     }
    // }
    
    // cout << "count = " << count << endl;

    return 0;
}