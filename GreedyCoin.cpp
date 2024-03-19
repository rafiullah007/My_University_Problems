#include <iostream>
#define n 9
#define limit 20
using namespace std;
int main()
{
    int a[n] = { 1, 2, 5, 10, 20, 50, 100, 200, 2000 };
    int taka = 93;
    int a2[limit] = { 0 };
    int i, k = 0;

    cout << "Following is minimal number of change for " << taka << " : ";

    for (i = n - 1; i >= 0; i--) {
        while (taka >= a[i]) {
            taka -= a[i];
            a2[k++] = a[i];
        }
    }

    for (i = 0; i < k; i++) {
        cout << a2[i] << " ";
    }

    return 0;
}

