#include <iostream>
using namespace std;

int main ( void ) {

    int N, X;
    cin >> N >> X;
    int input[N];
    int result[N];
    int result_count = 0;

    for ( int i = 0; i < N; i++ ) {
        cin >> input[i];
        if ( input[i] < X ) {
            result[result_count] = input[i];
            result_count++;
        }
    }

    for ( int i = 0; i < result_count; i++ ) {
        cout << result[i] << " ";
    }

    return 0;
}