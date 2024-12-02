#include <iostream>
using namespace std;

int main ( void ) {

    int num_of_baskets = -1, test_cases = -1;
    cin >> num_of_baskets >> test_cases;

    int baskets[num_of_baskets];

    int i = 0, j = 0, tmp = 0;

    for ( int i = 0; i < num_of_baskets; i++ ) {
        baskets[i] = i + 1;
    }

    while ( test_cases > 0 ) {
        cin >> i >> j;

        tmp = baskets[i - 1];
        baskets[i - 1] = baskets[j - 1];
        baskets[j - 1] = tmp;

        test_cases--;
    }

    for ( int i = 0; i < num_of_baskets; i++ ) {
        cout << baskets[i] << " ";
    }

    cout << "\n";

    return 0;
}