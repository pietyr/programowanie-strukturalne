#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

double stopnieNaRadiany(double stopnie);

int main()
{
    setlocale(LC_ALL, "");

    double stopnie;
    int wybor;

    printf("Podaj wartość kąta w stopniach: ");
    scanf("%lf", &stopnie);

    printf("1. sinus\n");
    printf("2. cosinus\n");
    printf("3. tangens\n");
    printf("Wybierz operację: ");
    scanf("%d", &wybor);

    switch(wybor){
        case 1:
            printf("sin(%.0lf) = %.2fl", stopnie, sin(stopnieNaRadiany(stopnie)));
            break;
        case 2:
            printf("cos(%.0lf) = %.2lf", stopnie, cos(stopnieNaRadiany(stopnie)));
            break;
        case 3:
            if((int)stopnie % 90 == 0 && (int)stopnie % 180 == 90){
                printf("tg(%.0lf) nie istnieje", stopnie);
            }else{
                printf("tg(%.0lf) = %.2lf", stopnie, tan(stopnieNaRadiany(stopnie)));
            }
            break;
    }
    return 0;
}

double stopnieNaRadiany(double stopnie){
    return stopnie * M_PI / 180;
}
