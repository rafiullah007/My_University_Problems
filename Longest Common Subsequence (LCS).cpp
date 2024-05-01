#include <bits/stdc++.h>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int LCS(string a, string b, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (a[m - 1] == b[n - 1])
		return 1 + LCS(a, b, m - 1, n - 1);
	else
		return max(LCS(a, b, m, n - 1),
				LCS(a, b, m - 1, n));
}


int main()
{
	string s1 = "AGGTAB";
	string s2 = "GXTXAYB";
	int m = s1.size();
	int n = s2.size();
    int ans = LCS(s1, s2, m, n) ;
	cout << "Length of LCS is : " << ans ;

	return 0;
}

