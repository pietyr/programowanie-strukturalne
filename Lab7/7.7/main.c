#include <stdio.h>

double silnia_rekurencyjnie(int n);
double silnia_iteracyjnie(int n);

int main() {
    printf("Rekurencyjnie:22! = %.0f\n", silnia_rekurencyjnie(22));
    printf("Iteracyjnie: 22! = %.0f\n", silnia_iteracyjnie(22));
    return 0;
}

double silnia_rekurencyjnie(int n){
    if(n > 22 || n <= -1){
        printf("Nieprawidłowy argument\n");
        return -1;
    }
    if(n == 1 || n == 0){
        return 1;
    }
    return (double)n * silnia_rekurencyjnie(n - 1);
}

double silnia_iteracyjnie(int n){
    if(n > 22 || n < 0){
        printf("Nieprawidłowy argument\n");
        return -1;
    }

    double silnia = 1.0;

    for(int i = 2; i <= n; i++){
        silnia *= (double)i;
    }

    return silnia;
}