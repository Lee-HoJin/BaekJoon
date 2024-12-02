#include <iostream>
using namespace std;

int main ( void ) {

    string input_a, input_b;
    int result_a = 0, result_b = 0;

    cin >> input_a >> input_b;

    char tmp;

    result_a += ( input_a[0] - '0' );
    result_a += ( input_a[1] - '0' ) * 10;
    result_a += ( input_a[2] - '0' ) * 100;

    result_b += ( input_b[0] - '0' );
    result_b += ( input_b[1] - '0' ) * 10;
    result_b += ( input_b[2] - '0' ) * 100;

    if ( result_a > result_b ) {
        cout << result_a << endl;
    }
    else {
        cout << result_b << endl;
    }
    
    // tmp = input_a[0];
    // input_a[0] = input_a[2];
    // input_a[2] = tmp;

    // tmp = input_b[0];
    // input_b[0] = input_b[2];
    // input_b[2] = tmp;

    return 0;
}