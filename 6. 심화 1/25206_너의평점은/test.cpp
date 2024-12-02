#include <iostream>
#include <string>
#include <cstring>
using namespace std;

float get_grade ( string grade ) {
    if ( grade == "A+") {
        return 4.5;
    }
    else if ( grade == "A0" ) {
        return 4.0;
    }
    else if ( grade == "B+" ) {
        return 3.5;
    }
    else if ( grade == "B0" ) {
        return 3.0;
    }
    else if ( grade == "C+" ) {
        return 2.5;
    }
    else if ( grade == "C0" ) {
        return 2.0;
    }
    else if ( grade == "D+" ) {
        return 1.5;
    }
    else if ( grade == "D0" ) {
        return 1.0;
    }
    else if ( grade == "F" ) {
        return 0.0;
    }
    else if ( grade == "p" ) {
        return 0;
    }
}

int main ( void ) {

    char input[50];
    string buffer, grade;
    float time, sum_grade = 0, sum_time;
    int cases = 20;
    

    while ( cases-- ) {
        cin >> buffer >> time >> grade;

        sum_grade += ( time * get_grade(grade) );
        
        if ( grade != "P" ) {
            sum_time += time;
        }

        // char *ptr = strtok(input, " ");

        // ptr = strtok(NULL, " ");
    }

    cout <<  ( sum_grade / sum_time ) << endl;

    return 0;
}