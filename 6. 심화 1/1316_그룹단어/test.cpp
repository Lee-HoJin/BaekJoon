#include <iostream>
using namespace std;

int main ( void ) {

    int test_cases = 0, count = 0;
    cin >> test_cases;

    bool isNotGroupWord = false;

    string input;

    while ( test_cases-- ) {
        isNotGroupWord = false;
        cin >>  input; 
        
        for ( int i = 0; i < input.length(); i++ ) {
            int j = i;
            for ( j = i + 1; j < input.length(); j++ ) {
                if ( input[i] != input[j] ) {
                    // i = j - 1;
                    break;
                }
            }

           // cout << "| i = " << i << " | j = " << j << " | input[i] = " << input[i] << " | input[j] = " << input[j] << " |" << endl;

            for ( ; j < input.length(); j++ ) {
                if ( input[i] == input[j] ) {
                    isNotGroupWord = true;
                    break;
                }
            }
        }

        if ( !isNotGroupWord ) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}