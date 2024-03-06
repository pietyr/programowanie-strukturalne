#include <stdio.h>

float wyplata(float kwota_poczatkowa, float oprocentowanie, float lata);
void lokaty(float *wyplata_p1, float *wyplata_p2, float oprocentowanie1, float oprocentowanie2, float wplata);

int main(void){
    float wyplata1; // Lokata półroczna
    float wyplata2; // Lokata roczna
    float oprocentowanie1; // Oprocentowanie lokaty półrocznej
    float oprocentowanie2; // Oprocentowanie lokaty rocznej
    float wplata;

    printf("Podaj oprocentowanie lokaty półrocznej: ");
    scanf("%f", &oprocentowanie1);
    printf("Podaj oprocentowanie lokaty rocznej: ");
    scanf("%f", &oprocentowanie2);
    printf("Podaj kwotę wpłaty: ");
    scanf("%f", &wplata);

    lokaty(&wyplata1, &wyplata2, oprocentowanie1, oprocentowanie2, wplata);

    printf("Lokata półroczna o oprocentowaniu %.2f po 1 roku: %.2f\n", oprocentowanie1, wyplata1);
    printf("Lokata roczna o oprocentowaniu %.2f po 1 roku: %.2f\n", oprocentowanie2, wyplata2);
    return 0;
}

float wyplata(float kwota_poczatkowa, float oprocentowanie, float lata){
    return kwota_poczatkowa + kwota_poczatkowa * ( oprocentowanie / 100) * lata;
}

void lokaty(float *wyplata_p1, float *wyplata_p2, float oprocentowanie1, float oprocentowanie2, float wplata) {
    *wyplata_p1 = wyplata(wplata, oprocentowanie1, 0.5);
    *wyplata_p2 = wyplata(wplata, oprocentowanie2, 1);
}