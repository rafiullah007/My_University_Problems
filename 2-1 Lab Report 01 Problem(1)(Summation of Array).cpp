    /*

    2-1 Lab Report 01 Problem(1) =>
    1. Summation of Array

    */

#include <iostream>

using namespace std;

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
