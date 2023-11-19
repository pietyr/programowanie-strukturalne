#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool czy_automorficzna(int liczba, int modulo);
void znajdz_automorficzne(int n);

int main()
{
    znajdz_automorficzne(100000);
    return 0;
}

bool czy_automorficzna(int liczba, int modulo){
    int potega = pow(liczba, 2);
    return (potega % modulo) == liczba;
}

void znajdz_automorficzne(int max){
    // największa wartość, która podniesiona do potęgi nie przekroczy zakresu int
    if(max > 46340){
        max = 46340;
    }
    int modulo = 10;
    for(int i = 0; i <= max; i++){
        if(i == modulo){
            modulo *= 10;
        }
        if(czy_automorficzna(i, modulo)){
            printf("%d x %d = %d\n", i, i, pow(i, 2));
        }
    }
}
