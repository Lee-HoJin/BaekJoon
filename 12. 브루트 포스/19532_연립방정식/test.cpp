#include <iostream>
using namespace std;

int main ( void ) {

    int a, b, c, d, e, f, x = -999, y = -999;

    cin >> a >> b >> c >> d >> e >> f;

    for ( x = -999; x < 1000; x++ ) {
        for ( y = -999; y < 1000; y ++ ) {
            if ( ( x * a ) + ( b * y ) == c && ( d * x ) + ( e * y ) == f ) {
                cout << x << " " << y << endl;
                break;
            }
        }
    }

    return 0;
}