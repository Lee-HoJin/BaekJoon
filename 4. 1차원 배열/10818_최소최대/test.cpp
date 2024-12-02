#include <iostream>
using namespace std;

int main ( void ) {

    int test_cases = 0, smallest = 0, largest = 0, input = -1;

    cin >> test_cases;

    for ( int i = 0; i < test_cases; i++ ) {
        cin >> input;

        if ( i == 0 ) {
            smallest = input;
            largest = input;
        }

        else if ( input < smallest ) {
            smallest = input;
        }
        
        else if ( input > largest ) {
            largest = input;
        }
        
    }

    cout << smallest << " " << largest << endl;

    return 0;
}