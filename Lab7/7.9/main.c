#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Zadanie 7.9 - Liczby pierwsze

void znajdz_pierwsze(int n);

int main() {
    znajdz_pierwsze(100);
    return 0;
}

void znajdz_pierwsze(int n){
    bool pierwsze[n + 1];
    pierwsze[1] = false;
    for(int i = 2; i <= n; i++){
        pierwsze[i] = true;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(pierwsze[i]){
            for(int j = (int)pow((int)i, (int)2); j <= n; j += i){
                pierwsze[j] = false;
            }
        }
    }
    int nie_pierwsze = 0;
    printf("Liczby pierwsze: \n");
    for(int i = 1; i <= n; i++){
        if(pierwsze[i]){
            printf("%d\n", i);
        }else{
            nie_pierwsze++;
        }
    }
    printf("Było %d liczb, które okazały się nie być pierwszymi.\n", nie_pierwsze);
}