#include <stdio.h>

// Zadanie 9.2 - Zamiana miejscami dwóch liczb

void zamien_wartosci_liczb(int *a, int *b);

int main() {
    int a = 5;
    int b = 3;
    printf("a = %d, b = %d\n", a, b);
    zamien_wartosci_liczb(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}

void zamien_wartosci_liczb(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

