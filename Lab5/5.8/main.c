#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool czy_szczesliwy(int numer);

int main()
{
    setlocale(LC_ALL, "");

    int numer = -1;

    do{
        printf("Podaj numer biletu: ");
        scanf("%d", &numer);
    }while(numer < 0 || numer > 999999);

    printf(czy_szczesliwy(numer) ? "Wygrałeś!\n" : "Przegrałeś!\n");

    return 0;
}

bool czy_szczesliwy(int numer){

    int suma_cyfr = 0;
    for(int i = 1; i <= 6; i++){
        int cyfra = numer % 10;
        suma_cyfr = i <= 3 ? suma_cyfr + cyfra : suma_cyfr - cyfra;
        numer -= cyfra;
        numer /= 10;
    }

    return suma_cyfr == 0;
}
