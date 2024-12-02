#include <iostream>
using namespace std;

int main ( void ) {

    int num;
    cin >> num;

    int input[num];
    int count = 0;

    for ( int i = 0; i < num; i++ ) {
        cin >> input[i];
    }    

    int target;
    cin >> target;

    for ( int i = 0; i < num; i++ ) {
        if ( input[i] == target ) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}