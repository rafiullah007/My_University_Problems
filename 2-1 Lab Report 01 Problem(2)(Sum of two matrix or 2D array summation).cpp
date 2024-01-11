    /*

    2-1 Lab Report 01 Problem(2) =>
    2. Sum of two matrix or 2D array summation

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
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int m1[100][100], m2[100][100], sum[100][100];

    cout << "Enter elements of the 1st matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of the 2nd matrix:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
         {
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
         {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    cout << "\nSum of two matrices:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
         {
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
