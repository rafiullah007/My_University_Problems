#include <stdio.h>
/* Minnatul Jannat Mimi
   2212866643
   */
void listNumbersDesc(int s, int e) {
    if (s > e) {
        printf("Error!!!\n");
        return;
    }

    printf("Numbers in descending order from %d to %d:\n", s, e);
    for (int i = e; i >= s; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int s, e;

    printf("Enter the starting number: ");
    scanf("%d", &s);

    printf("Enter the ending number: ");
    scanf("%d", &e);

    listNumbersDesc(s, e);

    return 0;
}

