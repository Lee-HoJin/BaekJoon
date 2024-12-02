#include <iostream>
using namespace std;

int main() {

    int N;
    int n_ary;

    cin >> N;
    cin >> n_ary;

    int multiplier = n_ary;
    int count = 0;

    while (N > multiplier) {
        multiplier *= n_ary;
        count++;
    }

    while (N > 0) {
        
        if (multiplier > N) {
            // 진법 변환
            cout << n_ary - 1;

            multiplier /= n_ary;
            N -= multiplier;
        }

        else if ( multiplier == N ) {
            cout << n_ary - 1;
            for ( int i = 0; i < count + 1; i++ ) {
                cout << 0;
            } 
            cout << endl;
            return 0;
        }

        else {
            multiplier /= n_ary;
            cout << 0;
            while (0) {
                
                // n_ary * something > N 될 때까지 반복
                // something - 1로 진법 변환
            }
        }
        

        // cout << "multiplier = " << multiplier << endl;

        // 몫이 10 이상일 때는 문자

        // 몫이 10 미만일 때는 숫자

        // 0도 계산해야 함

        if (N > multiplier) {
            // .
        }
        else {
            // .
        }

        // cout << 0;
        // N -= n_ary;
    }


    // cout << "count : " << count << endl;
    // cout << "multiplier : " << multiplier << endl;
}