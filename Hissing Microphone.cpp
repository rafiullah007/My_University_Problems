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
    string s;
    cin >> s;
    int found = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 's' && s[i + 1] == 's')
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        cout << "hiss" << endl;
    } else {
        cout << "no hiss" << endl;
    }
    return 0;
}

