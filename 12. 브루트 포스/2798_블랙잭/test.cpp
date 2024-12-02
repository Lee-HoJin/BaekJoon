#include <iostream>
using namespace std;

int main ( void ) {

    int num_of_cards = 0, M = 0, sum = 0;
    cin >> num_of_cards >> M;

    int cards[num_of_cards];

    for ( int i = 0; i < num_of_cards; i++ ) {
        cin >> cards[i];
    }

    for ( int i = 0; i < num_of_cards - 2; i++ ) {
        for ( int j = i + 1; j < num_of_cards - 1; j++ ) {
            for ( int k = j + 1; k < num_of_cards; k++ ) {
                if ( cards[i] + cards[j] + cards[k] > sum && cards[i] + cards[j] + cards[k] <= M ) {
                        sum = cards[i] + cards[j] + cards[k];
                    }
            }
        }
    }

    cout << sum << endl;

    return 0;
}