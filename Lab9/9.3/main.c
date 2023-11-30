#include <stdio.h>

// Zadanie 9.3 - Zamiana wartości dwóch liczb

// Funkcja pobiera dwie zmienne i przypisuje im odpowiednio wartość ich sumy i różnicy
void zamien_wartosci(int *a, int *b);

int main() {
    int a = 9;
    int b = 2;
    printf("a = %d, b = %d\n", a, b);
    zamien_wartosci(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void zamien_wartosci(int *a, int *b){
    int suma = *a + *b;
    int roznica = *a - *b;
    *a = suma;
    *b = roznica;
}