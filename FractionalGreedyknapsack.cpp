#include<bits/stdc++.h>

using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


struct item{
    int v;
    int w;
};

class Solution
{
    public :

        bool static comp (item a, item b)

        {
            double r1 = (double) a.v / (double) a.w;
             double r2 = (double) b.v / (double) b.w;
            return r1>r2;
        }

        double FractionalKnapsack (int w, item a[], int n)

        {
            sort(a,a+n,comp);
            /// rem = remaining value
            /// cw = current wright
            /// fv = final value
            int cw(0), rem(0);

            double fv(0.0);

            for(int i = 0 ; i<n ; i++)
            {
                if(cw + a[i].w <= w)
                {
                    cw += a[i].w;
                    fv += a[i].v;
                }
                else
                {
                    rem = w - cw;
                    fv += (a[i].v / (double)a[i].w * (double)rem);
                    break;
                }
            }

            return fv;
        }

};


int main(void)
{
    int n = 3, w = 50;
    item a[n] = { {100,20},{60,10},{120,30} };
    Solution obj;
    double ans = obj.FractionalKnapsack(w,a,n);
    cout<< "The maximum value is : "<< fixed << setprecision(2) << ans;
    return 0 ;
}
