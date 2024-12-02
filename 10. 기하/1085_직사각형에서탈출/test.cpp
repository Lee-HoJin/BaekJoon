#include <iostream>
using namespace std;

int main ( void ) {

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int possibilities[4] = {x, y, w - x, h - y};
    int smallest = 1001;

    for ( int i = 0; i < 4; i++ ) {
        if ( smallest > possibilities[i] ) {
            smallest = possibilities[i];
        }
    }

    cout << smallest << endl;

    return 0;
}