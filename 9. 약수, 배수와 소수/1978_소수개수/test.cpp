#include <iostream>
using namespace std;

int main () {

    int n = 0, sum = 0, input = 0;
    cin >> n;
    
    while (n > 0) {
        cin >> input;

        int i  = 0;
        for ( i = 2; i < input; i++ ) {
            if ( input % i == 0) {
                break;
            }
        }
        if ( i == input) { 
            sum++;
        }

        n--;
    }
    cout << sum << endl;

    return 0;
}