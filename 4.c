i#include <iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int sumOfDigits(int x) {
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int number;

     << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Error: Please enter a positive integer." << std::endl;
        return 1;
    }

    int sum = sumOfDigits(number);

    cout << "Sum of the digits of " << number << ": " << sum << endl;

    return 0;
}
