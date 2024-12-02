#include <iostream>
using namespace std;

int main ( void ) {

    int num_of_baskets = -1, trials = -1;
    cin >> num_of_baskets >> trials;
    int baskets[num_of_baskets];

    for ( int i = 0; i < num_of_baskets; i++ ) {
        baskets[i] = i + 1;
    }

    int start = 0, end = 0, tmp = 0;
    while ( trials > 0 ) {

        cin >> start >> end;

        for ( int i = 0; i < (end - start + 1) / 2; i++ ) {
            tmp = baskets[start - 1 + i];
            baskets[start - 1 + i] = baskets[end - 1 - i];
            baskets[end -1 - i] = tmp;
            // 짝수 홀수 상관 없이
            // 끝끼리 바꾸고 다음 끝끼리 바꾸면 되지 않을까
        }

        trials--;
    }

    for ( int i = 0; i < num_of_baskets; i++ ) {
        cout << baskets[i] << " ";
    }
    
    cout << endl;

    return 0;
}