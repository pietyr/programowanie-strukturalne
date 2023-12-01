#include <stdio.h>

// Zadanie 9.6 - Liczby

void ile_liczb(int n, int *liczba_dodatnich, int *liczba_zer);

int main() {
    int n;
    printf("Podaj ilość liczb do sprawdzenia: ");
    scanf("%d", &n);
    int liczba_dodatnich, liczba_zer;
    ile_liczb(n, &liczba_dodatnich, &liczba_zer);
    printf("Ilość liczb dodatnich: %d\n", liczba_dodatnich);
    printf("Ilość zer: %d\n", liczba_zer);
    return 0;
}

void ile_liczb(int n, int *liczba_dodatnich, int *liczba_zer){
    int dodatnie = 0;
    int zera = 0;
    for(int i = 1; i <= n; i++){
        int liczba;
        printf("Podaj %d liczbę: ", i);
        scanf("%d", &liczba);
        if(liczba == 0){
            zera++;
        }
        if(liczba > 0){
            dodatnie++;
        }
    }
    *liczba_dodatnich = dodatnie;
    *liczba_zer = zera;
}