#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

    int input = -1;

    cin >> input;

    if ( input == 1 ) {
        cout << 1 << "/" << 1 << endl;
        return 0;
    }

    int series_adder = 0, converter = 1;

    while ( input > converter ) {
        converter += series_adder;
        series_adder++;
    }

    int base = converter - series_adder + 1;

    if ( input == converter ) {
        series_adder++;
        if ( series_adder % 2 == 0 ) {
            cout << input - base + 1 << "/" << series_adder - ( input - base + 1 );            
        }
        else {
            cout << series_adder - ( input - base + 1 ) << "/" << input - base + 1;
        }
    }
    else {
        if ( series_adder % 2 == 0 ) {
            cout << series_adder - ( input - base + 1 ) << "/" << input - base + 1;
        }
        else {
            cout << input - base + 1 << "/" << series_adder - ( input - base + 1 );
        }
    }

    cout << endl;

    return 0;
}