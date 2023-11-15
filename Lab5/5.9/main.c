#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float oblicz_wyplate(float pensja, int staz_pracy);

int main()
{
    setlocale(LC_ALL, "");

    float pensja;
    int staz_pracy;

    do{
        printf("Podaj pensję pracownika: ");
        scanf("%f", &pensja);
    }while(pensja < 0);

    do{
        printf("Podaj staż pracy w latach: ");
        scanf("%d", &staz_pracy);
    }while(staz_pracy < 0);

    printf("Wypłata pracownika wynosi %.2f\n", oblicz_wyplate(pensja, staz_pracy));

    return 0;
}

float oblicz_wyplate(float pensja, int staz_pracy){
    if(staz_pracy < 5){
        return pensja;
    }else if(staz_pracy <= 10){
        return pensja * (1 + (0.01 * staz_pracy));
    }else{
        return pensja * 1.15;
    }
}
