#include <stdio.h>
#include <stdlib.h>

void wyswietl_pokoje(int liczba_pokoi);

int main()
{
    wyswietl_pokoje(16);
    return 0;
}

void wyswietl_pokoje(int liczba_pokoi){
    printf("Lista pokoi\n");
    printf("Nr / x-osobowy / piętro\n");
    for(int i = 1; i <= liczba_pokoi; i++){
        if(i != 13){
            printf("%d / ", i);
            if(i % 2 == 0){
                printf("dwu-osobowy / ");
            }else{
                printf("jedno-osobowy / ");
            }
            if(i > liczba_pokoi / 2){
                printf("1 piętro\n");
            }else{
                printf("Parter\n");
            }
        }
    }
}
