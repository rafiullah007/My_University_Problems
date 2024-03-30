
    /*

        2-2 Lab Assignment 1 (b): Solving the 01 Knapsack Problem =>
       Implement the greedy strategy to solve the 01 Knapsack Problem.
    */


#include <bits/stdc++.h>
using namespace std;

/*

MD. RAFIULLAH AL NAIM
UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
COLLEGE : ADAMJEE CANTONMENT COLLEGE
STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

*/


struct item {
    int v;
    int w;
};

class Solution {

public:

    bool static comp(item a, item b) {
        double r1 = (double) a.v / (double) a.w;
        double r2 = (double) b.v / (double) b.w;
        return r1 > r2;
    }


    int GK(int capacity, item a[], int n, int i)
    {
        sort(a, a + 7, comp);

        if (i >= n || capacity <= 0)
          {
                return 0;
          }

        if (a[i].w <= capacity)
            {
                return a[i].v + GK(capacity - a[i].w, a, n, i + 1);
            }

        return GK(capacity, a, n, i + 1);
    }
};

int main() {
    int n = 7, capacity = 10;
    item a[7] = {{0, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 6}, {6, 7}, {7, 8}};

    Solution obj;
    int ans = obj.GK(capacity, a, 7, 0);
    cout << "The maximum value is : " << ans;
    return 0;
}
