#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void czas_podwojenia(float wyplata, float oprocentowanie);

int main()
{
    setlocale(LC_ALL, "");
    float wyplata, oprocentowanie;
    printf("Podaj wypłatę: ");
    scanf("%f", &wyplata);
    printf("Podaj oprocentowanie (np. 5 oznacza 5%): ");
    scanf("%f", &oprocentowanie);
    czas_podwojenia(wyplata, oprocentowanie);
    return 0;
}

void czas_podwojenia(float wyplata, float oprocentowanie){
    int lata = 0;
    float poczatkowa = wyplata;
    while(wyplata < poczatkowa * 2){
        wyplata *= (1.0 + oprocentowanie / 100.0);
        lata++;
    }
    printf("Wypłata równa: %.2f, podwoi się po %d latach i wyniesie %.2f", poczatkowa, lata, wyplata);
}
