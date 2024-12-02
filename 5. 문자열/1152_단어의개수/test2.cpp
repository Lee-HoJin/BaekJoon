#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

bool isChar (char input) {
     if ( ( input >= 'A' && input <= 'Z' ) ||
        ( input >= 'a' && input <= 'z' ) ) {
        return true;
    }

    else {
        return false;
    }
}

int main ( void ) {

    string input;
    getline(cin, input);

    int index = 1, count = 0;
    int length = input.length();

    if ( length == 1 && isChar(input[0]) ) {
        cout << 1 << endl;
        return 0;
    }

    while ( true ) {

        if ( index == length ) {
            break;
        }

        if ( isChar(input[index - 1]) && !isChar(input[index]) ) {
            count++;
        }

        if ( index == length - 1 && isChar(input[index]) ) {
            count++;
        }
        
        index++;
    }

    cout << count << endl;

    return 0;
}