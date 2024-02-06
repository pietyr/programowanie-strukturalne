#include <stdio.h>

void dwie_najwieksze_liczby(int ilosc_liczb, int* najwieksza, int* druga_najwieksza);

int main() {
    int max1, max2;
    dwie_najwieksze_liczby(5, &max1, &max2);
    printf("Najwieksza = %d, Druga najwieksza = %d", max1, max2);
    return 0;
}

void dwie_najwieksze_liczby(int ilosc_liczb, int *najwieksza, int *druga_najwieksza){
    int max1, max2;
    for(int i = 1; i <= ilosc_liczb; i++) {
        printf("Podaj %d liczbę: ", i);
        if(i == 1){
            scanf("%d", &max1);
        }else{
            int liczba;
            scanf("%d", &liczba);
            if(i == 2){
                if(liczba > max1){
                    max2 = max1;
                    max1 = liczba;
                }else{
                    max2 = liczba;
                }
            }else{
                if(liczba > max1){
                    max2 = max1;
                    max1 = liczba;
                }else if(liczba > max2){
                    max2 = liczba;
                }
            }
        }
    }
    *najwieksza = max1;
    *druga_najwieksza = max2;
}