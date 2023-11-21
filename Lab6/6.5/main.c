#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int najwieksza();

int main()
{
    setlocale(LC_ALL, "");
    printf("Największa liczba z podanych = %d", najwieksza());
    return 0;
}

int najwieksza(){
    int max = -1;
    int kolejna;
    printf("Funkcja znajduje największą liczbę z podanych. Aby zakończyć wpisz -1\n");
    do{
        printf("Podaj kolejną liczbę: ");
        scanf("%d", &kolejna);
        if(kolejna > max){
            max = kolejna;
        }
    }while(kolejna != -1);
    return max;
}
