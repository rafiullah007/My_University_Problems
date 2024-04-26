#include <stdio.h>
/* Minnatul Jannat Mimi
   2212866643
   */
double harmonicSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double sum = harmonicSum(n);

    printf("Sum of the harmonic series up to %d terms: %lf\n", n, sum);

    return 0;
}

