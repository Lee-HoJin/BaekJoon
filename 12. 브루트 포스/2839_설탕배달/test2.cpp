#include <iostream>
using namespace std;

int main ( void ) {

    int input = 0, count = 0, min_count = ( 5000 / 3 );
    cin >> input;

    count += ( input / 5 );
    count += ( input % 5 ) / 3;

    for ( int i = 0; input > 0; i++ ) {
        count = i;

        count += ( input / 5 );
        count += ( input % 5 ) / 3;

        if ( ( input % 5 ) % 3 != 0 ) {
            if ( input % 3 == 0 ) {
                count = input / 3;
            }

            else {
                count = ( 1666 );

                // if ( input < 5 + 1 ) {
                //     cout << -1 << endl;
                //     return 0;
                // }
            }

        }

        if ( count < min_count ) {
            min_count = count;
        }

        input -= 5;

    }

    if ( min_count == 1666 ) {
        cout << -1 << endl;
        return 0;
    }

    cout << min_count << endl;

    return 0;
}