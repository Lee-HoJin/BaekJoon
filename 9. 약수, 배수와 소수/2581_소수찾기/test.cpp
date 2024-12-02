#include <iostream>
using namespace std;

int main() {

    int M, N;
    int sum = 0, lowest = 0;

    cin >> M;
    cin >> N;

    for (int i = M ; i < N + 1; i++) {
        int k = 2;
        for (k = 2; k < i; k++) {
            if ( i % k == 0) {
                break;
            }
        }

        if ( k == i ) {
            if (sum == 0) {
                lowest = k;
            }
            sum += k;
        }
    }

    if (sum == 0) {
        cout << -1 << endl;
    }
    else {
        cout << sum << endl << lowest << endl;
    }

    return 0;
}