#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int count = 0;
char s[100000];
char *ptr;

int main ( void ) {

    cin.getline(s, 100000);
    ptr = strtok(s, " ");

    while ( ptr != NULL ) {
        count++;
        ptr = strtok(NULL, " ");
    }

    cout << count << endl;

    return 0;
}