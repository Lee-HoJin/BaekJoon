#include <iostream>
using namespace std;

int main ( void ) {

    string input;
    cin >> input;

    int count = 0, largest_count = -1, most_alphabet;
    int alphabet_frequency[26];

    for ( int i = 0; i < 26; i++ ) {
        count = 0;

        for ( int j = 0; j < input.length(); j++ ) {
            if ( input[j] > 96 ) {
                input[j] -= 32;
            }

            if ( input[j] == 'A' + i ) {
                count++;
            }
        }

        if ( count > largest_count ) {
            largest_count = count;
            most_alphabet = 'A' + i;
        }

        alphabet_frequency[i] = count;
    }

    for ( int i = 0; i < 26; i++ ) {
        if ( most_alphabet > 96 ) {
            most_alphabet -= 32;
        }

        if ( alphabet_frequency[i] == largest_count && most_alphabet != 'A' + i ) {
            cout << '?' << endl;
            return 0;
        }
    }

    cout << (char)most_alphabet << endl;

    return 0;
}