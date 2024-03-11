#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int BinarySearch(int a[], int l , int r , int t)
{
    while(l<=r)
    {
        int m = l+(r-l)/2;
        if(a[m]==t) return m;
        else if(a[m]<t) l = m+1;
        else r = m-1;
    }
    return -1;
}
void input(int a[], int n)
{
    for(int i = 0 ; i<n; i++)
    {
        cin>>a[i];
    }
}

int main(void)
{
    int n;
    cin>>n;
    int a [n];
    cout<<"Enter the elements of your arrays : " ;
    input(a,n);
    int res = BinarySearch( a, 0 , 5-1 , 8); /// target = 8
    (res==-1)
    ? cout<<"Element is not found"<<endl
    : cout<<"Element Found at index : " <<res<<endl;
}

