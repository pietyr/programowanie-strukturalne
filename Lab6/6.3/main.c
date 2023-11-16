#include <stdio.h>
#include <stdlib.h>

void srednia();

int main()
{
    srednia();
    return 0;
}

void srednia(){
    int liczba;
    int licznikParzystych = 0;
    int licznikNieparzystych = 0;
    int sumaParzystych = 0;
    int sumaNieparzystych = 0;
    do{
        printf("Podaj kolejną liczbę: ");
        scanf("%d", &liczba);
        if(liczba % 2 == 0){
            sumaParzystych += liczba;
            licznikParzystych++;
        }else{
            sumaNieparzystych += liczba;
            licznikNieparzystych++;
        }
    }while(liczba != 0);
    if(licznikParzystych > 0){
        printf("Średnia parzystych = %.2f\n", (float)(sumaParzystych / (float)licznikParzystych));
    }
    if(licznikNieparzystych > 0){
        printf("Średnia nieparzystych = %.2f\n", (float)(sumaNieparzystych / (float)licznikNieparzystych));
    }
}
