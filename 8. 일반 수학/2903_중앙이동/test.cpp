#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double N;
    cin >> N;

    double sum = 3;
    for (int i = 1; i < N; i++) {
        sum += pow(2, i);
    }

    cout.precision(15);
    cout << pow(sum, 2) << endl;

    return 0;
}