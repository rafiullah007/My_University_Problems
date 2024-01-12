    /*

    2-1 Lab Report 01 Problem(4) =>
    4. Insert a number in an array

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
    int s, p;
    cout << "Enter the size of your array: ";
    cin >> s;
    int a[s];
    int target = 0, add = 0;
    cout << "Enter the elements of your array: ";
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    cout << "Enter the insert value: ";
    cin >> add;
    for (int i = 0; i < s; i++)
     {
        if (a[i] == target)
         {
            p = i;
        }
    }
    for (int i = s - 1; i >= p; i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = add;
    for (int i = 0; i <= s; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
