#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int liczba(int a, int b, int c);

int main()
{
    setlocale(LC_ALL, "");

    int liczby[3];

    for (int i = 0; i <= 2; i++){
        do{
            printf("Podaj %d liczbę: ", i + 1);
            scanf("%d", &liczby[i]);
        }while(liczby[i] < 0);
    }
    printf("Wynik funkcji = %d\n", liczba(liczby[0], liczby[1], liczby[2]));
    return 0;
}

int liczba(int a, int b, int c){
    if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
        return a + b + c;
    }
    if(a == 1 || b == 1 || c == 1){
        return a * b * c;
    }

    return -1;
}
