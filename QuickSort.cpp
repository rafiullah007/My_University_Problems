/// QuickSort.cpp

#include <iostream>


    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


using namespace std;

int part(int a[], int l ,int h)
{
    int pvt = a[l];
    int i = l+1;
    int j = h;
    while(i<=j)
    {
        while (a[i]<pvt && i <=h) i++;
        while (a[j]>pvt && j>=l) j--;
        if(i<j)
        {
            swap(a[i],a[j]);  i++; j--;
        }
    }
    swap(a[j],a[l]);
    return j;
}

void QS (int a[], int l, int h)
{
    if(l<h)
    {
        int pi = part(a,l,h);
        QS(a,l,pi-1);
        QS(a,pi+1,h);
    }


}


int main()
{
    int a[] = {13,4,5,6,4,3,1,2,3,4,324,3,2,2,1,7};
    int n =  sizeof(a)/ sizeof(a[0]);
    QS(a,0,n-1);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
