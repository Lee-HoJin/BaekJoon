#include <iostream>
using namespace std;

int main ( void ) {

    int input = 0, sum = 0, target_num = 1, tmp = 0;

    cin >> input;

    if ( input == 1 ) {
        cout << 0 << endl;
        return 0;
    }

    for  ( target_num = 1; target_num < 1000000; target_num++ ) {
        sum = target_num;

        tmp = target_num;
        
        while ( tmp ) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if ( sum == input ) {
            cout << target_num << endl;
            return 0;
        }
    }

    // 찾을 수 없을 때
    cout << 0 << endl;
    return 0;

}