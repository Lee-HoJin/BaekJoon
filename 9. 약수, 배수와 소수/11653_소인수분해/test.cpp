#include <iostream>
using namespace std;

int main() {

    int input;
    cin >> input;

    if (input == 1) {
        return 0;
    }

    for ( int i = 2; i < input + 1; i++) {
        while ( input % i == 0) {
            cout << i << endl;
            input /= i;
        }
    }

    return 0;
}