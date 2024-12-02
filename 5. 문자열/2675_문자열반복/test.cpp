#include <iostream>
using namespace std;

int main ( void ) {

    int test_cases = 0;
    cin >> test_cases;

    int rep = 0;
    string input;

    while ( test_cases > 0 ) {
        cin >> rep >> input;

        for ( int i = 0; i < input.length(); i++ ) {
            for ( int j = 0; j < rep; j++ ) {
                cout << input[i];
            }
        }

        cout << endl;

        test_cases--;
    }

    return 0;
}