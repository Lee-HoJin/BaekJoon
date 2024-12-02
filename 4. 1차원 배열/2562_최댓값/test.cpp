#include <iostream>
using namespace std;

int main ( void ) {

    int target = -1, largest = 0, index = -1;

    for ( int i = 0; i < 9; i++ ) {
        cin >> target;
        if ( target > largest ) {
            largest = target;
            index = i + 1;
        }
    }

    cout << largest << endl << index << endl;

    return 0;
}