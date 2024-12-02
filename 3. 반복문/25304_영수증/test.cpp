#include <iostream>
using namespace std;

int main () {

    int sum = 0;
    int N, a, b;

    cin >> sum;
    cin >> N;

    for ( int i = 0; i < N; i++) {
        cin >> a >> b;
        sum -= ( a * b );
    }

    if ( sum == 0 ) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}