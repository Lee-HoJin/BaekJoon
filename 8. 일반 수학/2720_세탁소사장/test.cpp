#include <iostream>
using namespace std;

int main() {

    int num_of_testcases;
    cin >> num_of_testcases;

    int input[num_of_testcases];
    int case_count = 0;

    for (int i = 0; i < num_of_testcases; i++) {
        cin >> input[i];
    }

    static int quarter = 25;
    static int dime = 10;
    static int nickel = 5;
    static int penny = 1;

    while (num_of_testcases > 0) {
        
        int output;
        for ( output = 0; quarter <= input[case_count]; output ++) {
            input[case_count] -= quarter;
        }
        cout << output << " ";

        for ( output = 0; dime <= input[case_count]; output ++) {
            input[case_count] -= dime;
        }
        cout << output << " ";

        for ( output = 0; nickel <= input[case_count]; output ++) {
            input[case_count] -= nickel;
        }
        cout << output << " ";

        for ( output = 0; penny <= input[case_count]; output ++) {
            input[case_count] -= penny;
        }
        cout << output << " " << endl;                
        
        num_of_testcases--;
        case_count++;
    }
}