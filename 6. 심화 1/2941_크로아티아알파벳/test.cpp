#include <iostream>
#include <string>
using namespace std;

int main ( void ) {

    string alphabet_list[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    int test_cases = 8, count = 0;

    string input;
    cin >> input;

    for ( int i = 0; i < input.length(); i++ ) {
        if ( input[i] == '=' ) { 
            if (input[i - 1] == 'c' && i > 0 ) {
                count--;
            }
            else if ( input[i - 1] == 's' && i > 0 ) {
                count--;
            }
            else if ( input[i - 1] == 'z' && input[i - 2] == 'd' && i > 1 ) {
                count -= 2;
            }
            else if ( input[i - 1] == 'z' && i > 0 ) {
                count--;
            }            
        }

        if ( input[i] == '-' ) {
            if ( input[i - 1] == 'c' && i > 0 ) {
                count--;
            }
            else if ( input[i - 1] == 'd' && i > 0 ) {
                count--;
            }
        }

        if ( input[i] == 'j' && i > 0 ) {
            if ( input[i - 1] == 'l' ) {
                count--;
            }
            else if ( input[i - 1] == 'n' ) {
                count--;
            }
        }

        count++;

    }

    // while ( test_cases-- ) {
    //     if ( input.find(alphabet_list[test_cases - 1]) != string::npos ) {
    //         count++;
    //     }
    // }

    cout << count << endl;

    return 0;
}