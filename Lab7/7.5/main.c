#include <stdio.h>
#include <stdbool.h>

// Zadanie 7.5 - Ciąg arytmetyczny

bool czy_ciag_arytmetyczny(int ilosc_liczb);

int main() {
    int ilosc_liczb;
    printf("Funkcja sprawdza czy podane n liczb tworzą ciąg arytmetyczny\n");
    printf("Podaj ilość liczb: ");
    scanf("%d", &ilosc_liczb);
    if(czy_ciag_arytmetyczny(ilosc_liczb)){
        printf("Liczby tworzą ciąg arytmetyczny.\n");
    }else{
        printf("Liczby nie tworzą ciągu arytmetycznego (różnica nie jest stała)\n");
    }
    return 0;
}

bool czy_ciag_arytmetyczny(int ilosc_liczb){
    if(ilosc_liczb <= 2){
        return true;
    }else{
        int poprzednia, kolejna, roznica;
        printf("Podaj 1 wyraz ciągu: ");
        scanf("%d", &poprzednia);
        printf("Podaj 2 wyraz ciągu: ");
        scanf("%d", &kolejna);
        roznica = kolejna - poprzednia;
        poprzednia = kolejna;
        for(int i = 3; i <= ilosc_liczb; i++){
            printf("Podaj %i wyraz ciągu: ");
            scanf("%d", &kolejna);
            if(kolejna - poprzednia != roznica){
                return false;
            }else{
                roznica = kolejna - poprzednia;
                poprzednia = kolejna;
            }
        }
    }
    return true;
}