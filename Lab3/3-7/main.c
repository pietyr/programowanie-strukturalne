#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");  // Dodanie polskich znaków
    int lata, miesiace, nowe_miesiace;
    printf("Podaj swój wiek w formacie 'LATA,MIESIĄCE': ");
    scanf("%d,%d", &lata, &miesiace);
    printf("\nPodaj liczbę miesięcy, które mają być dodane do twojego wieku: ", nowe_miesiace);
    scanf("%d", &nowe_miesiace);

    lata += (miesiace + nowe_miesiace) / 12;
    miesiace = (miesiace + nowe_miesiace) % 12;

    system("@cls||clear"); // Czyszczenie konsoli
    printf("Za %d miesięcy będziesz miał %d lat i %d miesięcy", nowe_miesiace, lata, miesiace);
    return 0;
}
