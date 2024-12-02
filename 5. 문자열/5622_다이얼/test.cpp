#include <iostream>
using namespace std;

int num_converter (char input) {

    if ( input >= 'A' && input <= 'C') {
        return 2;
    }
    else if ( input >= 'D' && input <= 'F' ) {
        return 3;
    }
    else if ( input == 'G' || input == 'H' || input == 'I' ) {
        return 4;
    }
    else if ( input == 'J' || input == 'K' || input == 'L' ) {
        return 5;
    }
    else if ( input == 'M' || input == 'N' || input == 'O' ) {
        return 6;
    }
    else if ( input >= 'P' && input <= 'S' ) {
        return 7;
    }
    else if ( input >= 'T' && input <= 'V' ) {
        return 8;
    }
    else if ( input >= 'W' && input <= 'Z' ) {
        return 9;
    }
    else {
        return -1;
    }

}

int main ( void ) {

    int total_time = 0;
    string input;
    cin >> input;

    for ( int i = 0; i < input.length(); i++ ) {
        total_time += num_converter( input[i] ) + 1;
    }

    cout << total_time << endl;

    return 0;
}