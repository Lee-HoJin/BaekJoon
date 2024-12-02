#include <iostream>
using namespace std;

void insertion_sort ( int list[], int n ) {
    int i, j, key;

    for ( i = 1; i < n; i++ ) {
        key = list[i];

        for ( j = i - 1; j >= 0 && list[j] > key; j-- ) {
            list[j + 1] = list[j];
        }

        list[j + 1] = key;

    }
}

int main ( void ) {

    int input[5], sum = 0;

    for ( int i = 0; i < 5; i++ ) {
        cin >> input[i];
        sum += input[i];
    }

    insertion_sort( input, 5 );

    cout << sum / 5 << endl << input[2] << endl;

    return 0;
}