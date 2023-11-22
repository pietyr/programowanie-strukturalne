#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int czy_rosnacy(int n);

int main()
{
    int n;
    setlocale(LC_ALL, "");
    printf("Podaj ilość liczb: ");
    scanf("%d", &n);
    if(czy_rosnacy(n) == 1){
        printf("Ciąg rosnący!");
    }else{
        printf("Ciąg nie jest rosnący!");
    }
    return 0;
}

int czy_rosnacy(int n){
    int liczba, poprzednia;
    printf("Podaj liczbę: ");
    scanf("%d", &poprzednia);
    for(int i = 1; i < n; i++){
        printf("Podaj kolejną liczbę: ");
        scanf("%d", &liczba);
        if(liczba > poprzednia){
            poprzednia = liczba;
        }else{
            return 0;
        }
    }
    return 1;
}
