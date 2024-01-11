    /*

    2-1 Lab Report 01 Problem(1) =>
    1. Summation of Array

    */

#include <iostream>

using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int main()
 {
    int s;
    cout << "Enter the size of your array: ";
    cin >> s;

    int sum = 0;
    int a[s];

    cout << "Enter the elements of your array: ";
    for (int i = 0; i < s; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < s; i++) {
        sum += a[i];
    }

    cout << "Summation is: " << sum << endl;

    return 0;
  }
