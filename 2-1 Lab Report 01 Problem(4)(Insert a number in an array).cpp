    /*

    2-1 Lab Report 01 Problem(4) =>
    4. Insert a number in an array

    */

#include <iostream>
using namespace std;

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
