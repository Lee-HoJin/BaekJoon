#include <iostream>
using namespace std;

int main ( void ) {

    int input = 0, count = 0, min_count = ( 5000 / 3 );
    cin >> input;

    int i = 0, j = 0;
    bool flag = false;
    for ( i = 0; i <= input / 5; i++ ) {

        count = 0;
        for ( j = 0; j <= input / 3; j++ ) {
            if ( input == ( ( 5 * i ) + ( 3 * j ) ) ) {
                count = i + j;
                break;
            }
        }

        if ( count < min_count && count != 0 ) {
            min_count = count;
            flag = true;
        }
    }

    if ( !flag ) {
        cout << -1 << endl;
    }
    else {
        cout << min_count << endl;
    }

    return 0;
}