#include <iostream>
using namespace std;

int main () {

    int test_cases;
    cin >> test_cases;

    int a, b;

    while ( test_cases > 0 ) {
        a = 0, b = 0;

        cin >> a >> b;

        cout << a + b << endl;

        test_cases--;
    }

    return 0;
}