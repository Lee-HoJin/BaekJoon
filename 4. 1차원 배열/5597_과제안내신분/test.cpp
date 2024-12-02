#include <iostream>
using namespace std;

int main ( void ) {

    int no_submit[2];
    int no_submit_index = 0;
    int roll_book[30];

    for ( int i = 0; i < 30; i++ ) {
        roll_book[i] = 0;
    }

    int attended;

    for ( int i = 0; i < 28; i++ ) {
        cin >> attended;
        roll_book[attended - 1] = 1;
    }

    int first = 0, second = 0;
    for ( int i = 0; i < 30; i++ ) {
        if ( roll_book[i] == 0 ) {
            no_submit[no_submit_index] = i + 1;
            
            if ( no_submit_index == 0 ) {
                first = i + 1;
            }

            if ( first < i + 1 ) {
                second = first;
                first = i + 1;
            }
            else {
                second = i + 1;
            }
            no_submit_index++;
        }
    }

    cout << second << endl << first << endl;

    return 0;
}