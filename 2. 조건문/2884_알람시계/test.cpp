#include <iostream>
using namespace std;

int main () {

    int H, M;

    cin >> H >> M;

    if ( M > 44) {
        M -= 45;
    }
    else {
        H--;
        if ( H < 0) {
            H = 23;
        }
        M = M + 60 - 45;
    }

    cout << H << " " << M << endl;

    return 0;
}