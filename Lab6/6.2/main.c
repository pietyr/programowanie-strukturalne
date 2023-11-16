#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float sredniaWhile(int n);
float sredniaDoWhile(int n);

int main()
{
    int n;
    setlocale(LC_ALL, "");
    printf("Podaj ilość liczb dla funkcji while: ");
    scanf("%d", &n);
    printf("Średnia %d liczb z wykorzystaniem pętli while = %.2f\n", n, sredniaWhile(n));

    printf("Podaj ilość liczb dla funkcji do while: ");
    scanf("%d", &n);
    printf("Średnia %d liczb z wykorzystaniem pętli do while = %.2f\n", n, sredniaDoWhile(n));
    return 0;
}

float sredniaWhile(int n){
    float suma = 0;
    int i = 0;
    int liczba;
    while(i < n){
        system("@cls||clear");
        printf("Podaj %d liczbę: ", i + 1);
        scanf("%d", &liczba);
        suma += liczba;
        i++;
    }
    return suma / n;
}

float sredniaDoWhile(int n){
    float suma = 0;
    int i = 0;
    int liczba;
    do{
        system("@cls||clear");
        printf("Podaj %d liczbę: ", i + 1);
        scanf("%d", &liczba);
        suma += liczba;
        i++;
    }while(i < n);
    return suma / n;
}
