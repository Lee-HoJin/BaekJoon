#include <iostream>
using namespace std;

int main() {

    int A, B, V, count;

    cin >> A;
    cin >> B;
    cin >> V;

    count = 0;
    int tmp = 0;

    if (V < A) {
        count = 1;
    }
    else {
        tmp = ( ( V - A ) / ( A - B ) );
        if ( ( V - A ) % ( A - B ) != 0) { tmp++; }

        count = 1 + tmp;
    }

    cout << count << endl;

    return 0;
}