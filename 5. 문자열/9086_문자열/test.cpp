#include <iostream>
using namespace std;

int main ( void ) {

    int test_cases;
    cin >> test_cases;
    
    string input;

    while ( test_cases > 0 ) {

        cin >> input;

        cout << input[0] << input[input.length() - 1] << endl;

        test_cases--;
    }

    return 0;
}