//2-2 LabTest#1

#include<iostream>
using namespace std;


    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int TNS(int a[], int l , int r , int t)
{
    while(l<=r)
    {
        int m1 = l+(r-l)/3;
        int m2 = r-(r-l)/3;
        if(a[m1]==t) return m1;
        else if(a[m2]==t) return m2;
        else if(a[m1]>t)
        {
            return TNS( a,  l ,  m1-1 ,  t);
        }
        else if(a[m2]<t)
        {
            return TNS( a,  m2+1 ,  r ,  t);
        }

        else return TNS( a,m1+1,  m2-1 ,  t);
    }
    return -1;
}
void input(int a[],int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
}

void display(int a[],int n)
{
    int res = TNS( a,  0 ,  n-1 ,  5);
    (res==-1)
    ? cout<<"Element is not found"<<endl
    : cout<<"Element Found at index : " <<res<<endl;
}

int main(void)
{
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    int a [n];
    cout<<"Enter the values of the array : ";
    input(a,n);
    display(a,n);

}
