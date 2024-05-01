#include <iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


void listNumbersDesc(int s, int e) {
    if (s > e) {
        cout << "Error!!!" <<endl;
        return;
    }

    cout << "Numbers in descending order from " << s << " to " << e << ":" <<endl;
    for (int i = e; i >= s; i--) {
        cout << i << " ";
    }
    cout << std::endl;
}

int main() {
    int s, e;

    cout << "Enter the starting number: ";
    cin >> s;

    cout << "Enter the ending number: ";
    cin >> e;

    listNumbersDesc(s, e);

    return 0;
}
