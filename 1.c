#include <stdio.h>
    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

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
