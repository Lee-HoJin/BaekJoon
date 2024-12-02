#include <iostream>
using namespace std;

void bubble_sort(int list[], int n) {
    int i, j, tmp;

    for ( int i = n - 1; i > 0; i-- ) {
        // 0부터 ( i - 1 )까지 반복
        for ( j = 0; j < i; j++ ) {
            // j번째와 j + 1번째의 요소가 크기 순이 아니면 교환
            if ( list[j] > list[j + 1] ) {
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
}

int main ( void ) {

    int i, n;
    cin >> n;

    int *input = new int[n];

    for ( int i = 0; i < n; i++ ) {
        cin >> input[i];
    }

    bubble_sort(input, n);

    for ( int i = 0; i < n; i++ ) {
        cout << input[i] << endl;
    }


    return 0;
}