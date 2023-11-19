#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool czy_automorficzna(int liczba, int modulo);
void znajdz_automorficzne(int n);
bool czy_pierwsza(int liczba);
void znajdz_pierwsze(int zakres);

int main()
{
    printf("Liczby automorficzne: \n");
    znajdz_automorficzne(100000);
    znajdz_pierwsze(200);
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

bool czy_pierwsza(int liczba){
    if(liczba < 2){
        return false;
    }

    // Pętla od 2 do liczba/2
    // Dla liczb 2 i 3 pętla nie wykona się ani razu, bo (liczba / 2 = 1)
    for(int i = 2; i <= liczba / 2; i++){
        // Jeżeli liczba jest podzielna przez i, to nie jest pierwsza
        if(liczba % i == 0){
            return false;
        }
    }

    // Jeżeli funkcja nie zwróciła false w pętli to znaczy, że jest liczba jest liczbą pierwszą
    return true;
}

void znajdz_pierwsze(int zakres){
    printf("\nLiczby pierwsze: ");
    for(int i = 2; i <= zakres; i++){
        if(czy_pierwsza(i)){
            printf("%d, ", i);
        }
    }
    printf("\n");
}
