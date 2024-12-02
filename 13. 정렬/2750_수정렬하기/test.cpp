#include <iostream>
using namespace std;
#include "test.h"


int main ( void ) {

    int i, n;
    cin >> n;

    int *input = new int[n];

    for ( int i = 0; i < n; i++ ) {
        cin >> input[i];
    }

    // bubble_sort(input, n);
    // selection_sort( input, n );
    // insertion_sort( input, n );
    // quick_sort( input, 0, n - 1 );
    merge_sort( input, 0, n - 1 );

    for ( int i = 0; i < n; i++ ) {
        cout << input[i] << endl;
    }

    return 0;
}