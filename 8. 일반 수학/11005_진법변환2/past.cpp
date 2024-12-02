#include <iostream>
using namespace std;

int main() {

    string target;
    int n_ary;

    cin >> target;
    cin >> n_ary;

    if ( n_ary > 36 ) {
        cout << "ERROR" << endl;
    }

    int sum = 0, multiplier = n_ary;
    int len = target.length();

    for (int i = len - 1; i >= 0; i--) {
        if ( i == ( len - 1 ) ) {
            if ((int)target[i] < 60 && (int)target[i] > 47) {
            sum += ((int)target[i] - 48 );
            }
            else if ((int)target[i] < 91 && (int)target[i] > 64) {
            sum += ((int)target[i] - 55 );
            }
        }

        else {
            if ((int)target[i] < 60 && (int)target[i] > 47) {
                sum += ((int)target[i] - 48 ) * multiplier;
                multiplier = multiplier * n_ary;
            }
            else if ((int)target[i] < 91 && (int)target[i] > 64) {
                sum += ((int)target[i] - 55 ) * multiplier;
                multiplier = multiplier * n_ary;
            }
        }
    }

    cout << sum << endl;
 
}