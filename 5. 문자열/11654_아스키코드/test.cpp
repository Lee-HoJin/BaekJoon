#include <iostream>
using namespace std;

int main ( void ) {

    char input;

    cin >> input;

    if ( input >= '0' && input <= '9' ) {
        cout << (int)input << endl;
    }
    else if ( input >= 'A' && input <= 'z') {
        cout << (int)input << endl;
    }

    return 0;
}