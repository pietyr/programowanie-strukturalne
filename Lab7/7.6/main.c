#include <stdio.h>

#define PI 3.1415

// Zadanie 7.6 - Suma szeregu

float sin(float kat_w_radianach, int k);

int main() {
    printf("sin(0stopni) = %f\n", sin(0, 9));
    printf("sin(15stopni) = %f\n", sin(PI / 12.0, 9));
    printf("sin(30stopni) = %f\n", sin(PI / 6.0, 9));
    printf("sin(45stopni) = %f\n", sin(PI / 4.0, 9));
    printf("sin(60stopni) = %f\n", sin(PI / 3.0, 9));
    printf("sin(90stopni) = %f\n", sin(PI / 2.0, 9));
    printf("sin(180stopni) = %f\n", sin(PI, 9));
    printf("sin(270stopni) = %f\n", sin(PI * 3.0 / 2.0, 9));
    return 0;
}

float sin(float kat_w_radianach, int k){
    if(k > 9){
        k = 9;
    }
    float suma = kat_w_radianach;
    int licznik = 1;
    long mianownik = 1;
    float x = kat_w_radianach;
    for(int n = 1; n <= k; n++){
        licznik *= -1;
        mianownik *= (2 * n);
        mianownik *= (2 * n + 1);
        x *= (kat_w_radianach * kat_w_radianach);

        suma += x * ((float)licznik / (float)mianownik);
    }
    return suma;
}