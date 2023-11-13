#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float pole (int a, int b, int c);

int main()
{
    int a, b, c;
    setlocale(LC_ALL, "");

    system("@cls||clear");
    printf("Obliczanie pola trójkąta o bokach A, B i C\n");
    printf("Podaj wartość A: ");
    scanf("%d", &a);

    system("@cls||clear");
    printf("Obliczanie pola trójkąta o bokach %d, B i C\n", a);
    printf("Podaj wartość B: ");
    scanf("%d", &b);

    system("@cls||clear");
    printf("Obliczanie pola trójkąta o bokach %d, %d i C\n", a, b);
    printf("Podaj wartość C: ");
    scanf("%d", &c);

    if(a <= 0 || b <= 0 || c <= 0){
        printf("Trójkąt nie istnieje - długość jednego z boków mniejsza niż 0\n");
        return 1;
    }else{
        if(a >= b){
            if(a >= c){
                // a - max
                if (a >= (b + c)){
                    printf("Trójkąt nie istnieje - suma dwóch krótszych boków mniejsza niż najdłuższy bok\n");
                    return 1;
                }
            }else{
                // c - max
                if (c >= (a + b)){
                    printf("Trójkąt nie istnieje - suma dwóch krótszych boków mniejsza niż najdłuższy bok\n");
                    return 1;
                }
            }
        }else{
            // a < b
            if (b >= c){
                // b - max
                if (b >= (a + c)){
                    printf("Trójkąt nie istnieje - suma dwóch krótszych boków mniejsza niż najdłuższy bok\n");
                    return 1;
                }
            }else{
                // c - max
                if (c >= (b + a)){
                    printf("Trójkąt nie istnieje - suma dwóch krótszych boków mniejsza niż najdłuższy bok\n");
                    return 1;
                }
            }
        }


    }

    printf("Pole trójkąta o bokach %d, %d, %d jest równe %.2f\n", a, b, c, pole(a, b, c));
    return 0;
}

float pole (int a, int b, int c){
    float p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
