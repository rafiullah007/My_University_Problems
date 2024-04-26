#include <stdio.h>
/* Minnatul Jannat Mimi
   2212866643
   */
int sumOfDigits(int x) {
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    int sum = sumOfDigits(number);

    printf("Sum of the digits of %d: %d\n", number, sum);

    return 0;
}

