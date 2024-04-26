#include <stdio.h>
/* Minnatul Jannat Mimi
   2212866643
   */
double getArea(int a, int b, int h) {
    double area;
    area = 0.5 * (a + b) * h;
    return area;
}

int main() {
    int a, b, h;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);

    double area = getArea(a, b, h);

    printf("The area of the trapezoid is: %.2f\n", area);

    return 0;
}
