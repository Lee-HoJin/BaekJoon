#include <iostream>
using namespace std;

int main ( void ) {

    int num_of_letters = 0;
    cin >> num_of_letters;

    string input;
    cin >> input;
    int sum = 0;

    for ( int i = 0; i < input.length(); i++) {
        sum += ( input[i] - '0' );
    }

    cout << sum << endl;

    return 0;
}