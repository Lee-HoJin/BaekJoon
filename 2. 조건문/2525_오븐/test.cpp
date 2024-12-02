#include <iostream>
using namespace std;

int main () {

    int h, m, time;

    cin >> h >> m >> time;

    while ( time > 60 ) {
        h++;
        time -= 60;
    }

    if ( m + time >= 60 ) {
        h++;
        m -= 60;
    }

    m += time;

    while ( h > 23) {
        h -= 24;
    }

    cout << h << " " << m << endl;

    return 0;
}