#include <iostream>
using namespace std;

int main ( void ) {

    int length = 0;
    cin >> length;

    int *input = new int[length];

    for ( int i = 0; i < 5; i++ ) {
        cin >> input[i];
    }

    int tmp;

    for ( int i = 0; i < length - 1; i++ ) {

        int index = 0;
        while ( input[index + i] <= input[i] || i + index < length ) {
            index++;
            if ( i + index == length ) {
                break;
            }
        }

        tmp = input[i];
        input[i] = input[index + i];
        input[index + i] = tmp;

    }

    for ( int i = 0; i < length; i++ ) {
        cout << input[i] << endl;
    }

    return 0;
}