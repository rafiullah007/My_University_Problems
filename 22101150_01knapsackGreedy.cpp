
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
    int v; /// v is for its value 
    int w; /// w is for its weight  
};

class Solution {
    
    /*
        Inside the class, define a static method comp to compare items based on their value-to-weight ratios
        This method is used for sorting the items in descending order of value-to-weight ratios.
        Because we all know greedy is nothing without sorting 

    */

public:

    bool static comp(item a, item b) {
        double r1 = (double) a.v / (double) a.w;
        double r2 = (double) b.v / (double) b.w;
        return r1 > r2;
    }
      /*  item a[] = array of items.
            n = total number of items.
            i = index of the current item.
      */

    int GK(int capacity, item a[], int n, int i)
    {
        sort(a, a + 7, comp); /// sorting the items in descending order of value-to-weight ratios.
    
          /*  
            if index of the current item > = total number of items.
            and 
            capacity is less than 0 
            then we will simply return 0 
         */

    
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
    int n = 6, capacity = 10;
    item a[n] = {{0, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 6}, {6, 7}, {7, 8}};

    Solution obj;
    int ans = obj.GK(capacity, a, n, 0);
    cout << "The maximum value is : " << ans;
    return 0;
}
