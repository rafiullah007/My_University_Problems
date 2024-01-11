    /*

    2-1 Lab Report 01 Problem(3) =>
    3. Count how many (time or times) the number of elements in an array have been repeated

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


int main() {
    int n;
    int sum = 0;
    cout << "Enter size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter values of your array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[n] = {0};

    for (int i = 0; i < n; i++) {
        if (freq[i] != 1) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 1;
                }
            }

            if (count == 1) {
                cout << arr[i] << " occurs " << count << " time" << endl;
            } else {
                cout << arr[i] << " occurs " << count << " times" << endl;
            }
        }
    }

    return 0;
}
