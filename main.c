#include <stdio.h>

void swap(int *A, int *B);

int main() {
    int a;
    int b;
    int c;
    printf("Hello, Mate!  Give me three numbers and I'll sort'em from tiny to biggy.\n\n");
    printf("First number: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    swap(&a, &b);
    swap(&a, &c);
    swap(&b, &c);

    printf("Your sorted numbers ar %d, %d and %d.\n", a, b, c);
    printf("See you around, mate!\n");
    return 0;
}

void swap(int *A, int *B) {
    if (*A > *B) {
        int temp = *A;
        *A = *B;
        *B = temp;
    }
}