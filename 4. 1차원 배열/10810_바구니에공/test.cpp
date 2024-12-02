#include <iostream>
using namespace std;

int main ( void ) {

    int num_of_baskets = -1, test_cases = -1;

    cin >> num_of_baskets >> test_cases;

    int baskets[num_of_baskets];

    for ( int i = 0; i < num_of_baskets; i++ ) {
        baskets[i] = 0;
    }

    int start, end, num;

    while ( test_cases > 0 ) {
        start = -1, end = -1, num = -1;
        cin >> start >> end >> num;

        for ( int i = start - 1; i < end; i++ ) {
            baskets[i] = num;
        }

        test_cases--;
    }

    for ( int i = 0; i < num_of_baskets; i++ ) {
        cout << baskets[i] << " ";
    }

    cout << endl;

    return 0;
}