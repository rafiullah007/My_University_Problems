/*
    Suppose you have been given an array of 8 elements that contain YOUR_BIRTHDAY
    as sequential digits in DD/MM/YYYY format. Your task is to print the array after
    removing all the duplicate elements.
    For instance, if Student A’s birthday is 17/08/1994, then the input array will have {1, 7,
    0, 8, 1, 9, 9, 2} the output array will have the following data: {7, 0, 8, 2}. Now you need
    to write a pseudocode to solve this problem, along with the necessary iterations.

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
    int a[8];

    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 8; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < 8; j++)
        {
            if (i != j && a[i] == a[j])
            {
                /// Check if the current element duplicate or not
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << a[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
