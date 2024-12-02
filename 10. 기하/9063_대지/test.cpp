#include <iostream>
using namespace std;

int main ( void ) {

    int cases = 0;
    cin >> cases;

    int x[cases], y[cases];

    int x_smallest, y_smallest, x_largest, y_largest;

    // 가장 작은 x, y 값과 가장 큰 x, y 값 차를 곱하면 될 듯
    for ( int i = 0; i < cases; i++ ) {
        cin >> x[i] >> y[i];
    }

    x_smallest = x[0];
    x_largest = x[0];
    y_smallest = y[0];
    y_largest = y[0];

    for ( int i = 1; i < cases; i++ ) {
        if ( x_smallest > x[i] ) {
            x_smallest = x[i];
        }
        else if ( x_largest < x[i] ) {
            x_largest = x[i];
        }

        if ( y_smallest > y[i] ) {
            y_smallest = y[i];
        }
        else if ( y_largest < y[i] ) {
            y_largest = y[i];
        }
    }

    int result = ( x_largest - x_smallest ) * ( y_largest - y_smallest );
    if ( result < 0) {
        result *= -1;
    }

    cout << result << endl;

    return 0;
}