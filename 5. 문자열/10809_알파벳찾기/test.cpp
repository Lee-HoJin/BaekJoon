#include <iostream>
using namespace std;

int main ( void ) {

    string input;
    cin >> input;

    int k = 0;
    for ( int i = 0; i < 26; i++ ) {
        for ( k = 0; k < input.length(); k++ ) {
            if ( input[k] - 'a' == i ) {
                cout << k << " ";
                break;
            }
        }
        if ( k == input.length() ) {
            cout << -1 << " ";
        }
    }

    return 0;
}