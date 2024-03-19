#include<iostream>
using namespace std;
int main()
{
    /// T =  Question array
    int T [5][3] =
    {
        {3,2,100},
        {1,2,90},
        {2,1,80},
        {4,3,50},
        {5,1,40},
    };

int shcedule [4] = {0};
int n = 5;
int profit(0);
for(int i = 0 ; i < n ; i ++)
{
    for(int j = T [i][1] ; j > 0 ; j--)
    {
        if(shcedule[j]==0)
        {
            shcedule[j] = T [i][0];
            profit+=T[i][2];
            break;
        }
    }
}

cout<<"Profit " << profit <<endl;
}
