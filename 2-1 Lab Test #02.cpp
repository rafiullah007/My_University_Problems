/*
Your task is to read an array A[100]. At the end, print all array
positions that store a number less or equal to 10 and the number stored
in that position.

Input:

The input contains 100 numbers. Each number can be integer, floating-
point number, positive or negative.

Output :

For each number of the array that is equal to 10 or less, print &quot;A [i] =
x&quot;, where i is the position of the array and x is the number stored in the
position, with one digit after the decimal point.

0     ---     A[0] = 0.0
-5    ---     A[1] = -5.0
-63    ---     A[1] = -8.5
-8.5
               ...
...

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the target row: ";
    cin >> n;
    float a[12][12];
    float sum = 0;
    float avr = 0;
    string s;
    cout << "Enter the string: ";
    cin >> s;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    if (s == "S")
    {
        cout << sum << endl;
    } else if (s == "M")
    {
        avr = sum / (12 * 12);
        cout << avr << endl;
    }

    return 0;
}
