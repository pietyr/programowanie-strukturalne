#include <stdio.h>
#include <math.h>

void wypisz_trojki(int n);

int main() {
    wypisz_trojki(30);
    return 0;
}

void wypisz_trojki(int n){
    for(int c = 1; c < n; c++){
        for(int b = 1; b < c; b++){
            for(int a = 1; a <= b; a++){
                if((pow(a, 2) + pow(b, 2) == pow(c, 2))){
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
}