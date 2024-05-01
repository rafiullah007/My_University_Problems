#include <bits/stdc++.h>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int LCS(string s1, string s2, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (s1[m - 1] == s2[n - 1])
		return 1 + LCS(s1, s2, m - 1, n - 1);
	else
		return max(LCS(s1, s2, m, n - 1),
				LCS(s1, s2, m - 1, n));
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

