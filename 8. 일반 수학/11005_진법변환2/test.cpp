#include <iostream>
#include <string>
using namespace std;

int main() {

    int N;
    int n_ary;
    string result;

    cin >> N;
    cin >> n_ary;
    string tmp;

    while ( N > 0 ) {
        if ( N % n_ary > 9 ) {
            tmp = (char)( 'A' + ( ( N % n_ary ) - 10 ) );
            result.append(tmp);
            N /= n_ary;
        }
        else {
            tmp = (char)( '0' + ( N % n_ary ) );
            result.append(tmp);
            N /= n_ary;
        }
    }

    for ( int i = 0; i < result.length(); i++ ) {
        cout << result[result.length() - 1 - i];
    }

    cout << endl;

}