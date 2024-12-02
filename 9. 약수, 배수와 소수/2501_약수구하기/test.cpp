#include <iostream>
using namespace std;

int main () {

    int n, k;
    int count = 0;

    cin >> n;
    cin >> k;

    int i = 1;
    for (i = 1; i <= n; i++) {
        if ( n % i == 0 ) {
            count++;

            if ( k == count ) {
                cout << i << endl;
                break;
            }
        }
    }

    if ( i == n + 1 && count < k ) {
        cout << 0 << endl;
    }

    return 0;
}