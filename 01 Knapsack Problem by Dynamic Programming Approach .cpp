
    /*

        2-2 Lab Assignment 1 (a): Solving the 01 Knapsack Problem =>
        Implement the dynamic programming approach to solve the 01 Knapsack Problem.

    */


#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int knapsack(int m, int n, int p[], int wt[])
{
    int k[n+1][m+1];
    for(int i = 0; i<=n; i++) /// i from 0 to n, representing the number of items considered.
    {
        for(int w = 0; w<=m; w++) ///w from 0 to W, representing the current capacity of the knapsack.

        {
            if(i==0 || w==0)
            {
                k[i][w] = 0;
            }
            else if(wt[i]<=w) ///If the i-th item fits in the knapsack
            {
                k[i][w] = max(k[i-1][w],p[i]+k[i-1][w-wt[i]]);  /// The maximum between these two values is going to be stored in k[i][w].
            }
            else
            {
                k[i][w] =k[i-1][w];
            }
        }
    }
    return k[n][m];
}

int  main()
{
    int n = 6;
    int p[n] = {0,1,2,5,6,7,8};
    int w [n] = {0,2,3,4,5,6,7};
    int capacity = 10;
    int maxprofit = knapsack(capacity,n,p,w);
    cout<<maxprofit<<endl;
}
