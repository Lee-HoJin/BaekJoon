#include <iostream>
using namespace std;

int main () {

    int input;
    cin >> input;

    if ( input > 89 ) {
        cout << "A" << endl;
    }
    else if ( input > 79 ) {
        cout << "B" << endl;
    }
    else if ( input > 79 - 10 ) {
        cout << "C" << endl;
    }
    else if ( input > 79 - 20 ) {
        cout << "D" << endl;
    } 
    else {
        cout << "F" << endl;
    }

    return 0;
}