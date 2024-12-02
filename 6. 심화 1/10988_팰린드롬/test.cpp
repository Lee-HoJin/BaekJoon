#include <iostream>
using namespace std;

int main ( void ) {

    string input;
    cin >> input;

    int char_end = input.length() - 1;
    int i = 0;
    bool isP = false;

    for ( int i = 0; i < ( input.length() / 2 ); i++ ) {
        if ( input[i] != input[char_end - i] ) {
            cout << 0 << endl;
            isP = true;
            return 0;
        }
    }

    if ( !isP ) {
        cout << 1 << endl;
        return 0;
    }

    return 0;
}