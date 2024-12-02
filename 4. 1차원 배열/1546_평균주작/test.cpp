#include <iostream>
using namespace std;

int main ( void ) {

    int trials = -1;
    cin >> trials;
    int input[trials];

    int input_index = 0, largest = 0, tmp = 0;
    double sum = 0;

    for ( int i = 0; i < trials; i++) {
        cin >> tmp;
        input[input_index] = tmp;
        input_index++;
    }

    for ( int i = 0 ; i < trials; i++ ) {
        if ( i == 0 ) {
            largest = input[i];
        }
        else {
            if (largest < input[i]) {
                largest = input[i];
            }
        }
    }
    
    for ( int i = 0 ; i < trials; i++ ) {
        sum += (double)( input[i] * 100 ) / (double)largest;
    }

    double result = sum / trials;

    cout << result << endl;

    return 0;
}