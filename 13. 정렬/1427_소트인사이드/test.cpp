#include <iostream>
using namespace std;

int main ( void ) {

    int *counting_sort = new int[10];

    long long input;
    cin >> input;

    for ( int i = 0; i < 10; i++ ) {
        counting_sort[i] = 0;
    }

    do {
        counting_sort[ ( input % 10 ) ]++;
    } while ( input /= 10 );

    for ( int i = 9; i >= 0; i-- ) {
        for ( int j = 0; j < counting_sort[i]; j++ ) {

            if ( counting_sort[i] != 0 ) {
                cout << i;
            }

        }
    }

    return 0;
}