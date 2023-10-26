#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float funkcja1(float a, int t);
float funkcja2(float a, int t);

int main()
{
    float a;
    int t;
    printf("Podaj wartość a: ");
    scanf("%f", &a);
    do{
        printf("Podaj wartość t: ");
        scanf("%d", &t);
    }while(t < 0 || t > 8 || t == 5);

    printf("\nWartość zwracana przez funkcję 1 dla podanych wartości: %f\n", funkcja1(a, t));
    printf("Wartość zwracana przez funkcję 2 dla podanych wartości: %f", funkcja1(a, t));
    return 0;
}

float funkcja1(float a, int t){
    if(t == 8){
        return 1 - sin(a);
    }
    if(t >= 0 && t <= 3){
        return 0.5 * (1 + cos(a));
    }
    if(t == 4 || t == 6 || t == 7){
        return sqrt(pow(a, 2) + 1);
    }
    return -1.0;
}

float funkcja2(float a, int t){
    switch(t){
        case 0:
            return 0.5 * (1 + cos(a));
            break;
        case 1:
            return 0.5 * (1 + cos(a));
            break;
        case 2:
            return 0.5 * (1 + cos(a));
            break;
        case 3:
            return 0.5 * (1 + cos(a));
            break;
        case 4:
            return sqrt(pow(a, 2) + 1);
            break;
        case 6:
            return sqrt(pow(a, 2) + 1);
            break;
        case 7:
            return sqrt(pow(a, 2) + 1);
            break;
        case 8:
            return 1 - sin(a);
            break;
    }
    return -1.0;
}
