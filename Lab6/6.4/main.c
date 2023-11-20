#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ile_wystapien(char litera, char zdanie[]);

int main()
{
    setlocale(LC_ALL, "");
    char litera;
    char zdanie[100];
    printf("Podaj zdanie: ");
    fgets(zdanie, sizeof zdanie, stdin);
    printf("%s", zdanie);
    printf("Podaj szukaną literę: ");
    scanf("%c", &litera);
    ile_wystapien(litera, &zdanie);
    return 0;
}

void ile_wystapien(char litera, char zdanie[]){
    int liczba_cyfr = 0;
    int liczba_liter = 0;
    for(int i = 0; zdanie[i] != '\0'; i++){
        if(zdanie[i] >= '0' && zdanie[i] <= '9'){
            liczba_cyfr++;
        }
        if(zdanie[i] == litera){
            liczba_liter++;
        }
    }
    printf("Liczba znaków %c = %d, Liczba cyfr = %d", litera, liczba_liter, liczba_cyfr);
}
