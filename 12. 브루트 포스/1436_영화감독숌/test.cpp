#include <iostream>
using namespace std;

int main ( void ) {

    int num = 0;
    cin >> num;

    int start = 666, tmp = 0;

    while ( num ) {

        tmp = start;
        while ( tmp ) {

            if ( tmp % 10 == 6 ) {
                if ( ( tmp % 100 ) / 10 == 6 && ( tmp / 100 ) % 10 == 6 ) {
                    num--;
                    break;
                }
            }

            tmp /= 10;
        }

        start++;
    }

    cout << start - 1 << endl;

    return 0;
}