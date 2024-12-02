#include <iostream>
using namespace std;

int main() {

    while(1) {
        int n, sum = 0, count = 0;
        cin >> n;

        if ( n < 0 ) { break; }

        int list[n];

        for (int i = 0; i < n; i++) {
            list[i] = 0;
        }

        for (int i = 1; i <= ( n / 2 ); i ++) {
            if (n % i == 0) {
                sum += i;
                list[count] = i;
                count++;
            }
        }

        cout << n;

        if (sum == n) {
            cout << " = ";
            int k = 0;
            for (k = 0; k < count - 1; k++) {
                cout << list[k] << " + ";
            }
            cout << list[k] << endl;
        }
        else {
            cout << " is NOT perfect." << endl;
        }

    }

    return 0;
}