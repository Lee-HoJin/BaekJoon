#include <iostream>
#include <iomanip>
using namespace std;

int main ( void ) {

    int num;
    cin >> num;

    for ( int i = 0; i < num; i ++ ) {
        cout << setw( num - i );
        for ( int j = 0; j < ( i * 2 + 1); j++ ) {            
            cout << '*';
        }
        cout << endl;
    }

    for ( int i = num - 2; i >= 0; i-- ) {
        cout << setw( num - i );
        for ( int j = 0; j < ( i * 2 + 1); j++ ) {            
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}