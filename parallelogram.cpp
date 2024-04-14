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
    int rows = 5;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }

        for (int k = 0; k < rows; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

