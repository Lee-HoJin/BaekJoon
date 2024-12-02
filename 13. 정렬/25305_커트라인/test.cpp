#include <iostream>
using namespace std;
#include <algorithm>

int main ( void ) {

    int total_num = 0, num_of_awarded = 0;

    cin >> total_num >> num_of_awarded;

    int input[total_num];

    for ( int i = 0; i < total_num; i++ ) {
        cin >> input[i];
    }

    sort( input, input + total_num, greater<int>() );

    cout << input[num_of_awarded - 1] << endl;

    return 0;
}