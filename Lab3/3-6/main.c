#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");  // Dodanie polskich znaków

    const float mileNaKilometry = 1.609344;

    int operacja;
    float wartosc;

    // Wybór operacji
    do{
        system("@cls||clear"); // Czyszczenie konsoli
        printf("1. Mile -> Kilometry.\n");
        printf("2. Kilometry -> Mile\n");
        printf("3. Konie mechaniczne -> Waty.\n");
        printf("4. Kilometry na godzinę -> Metry na sekundę.\n");
        printf("5. Fahrenheit -> Celsjusz.\n");
        printf("Wybierz operację: ");
        scanf("%d", &operacja);
    }while(operacja != 1 && operacja != 2 && operacja != 3 && operacja != 4 && operacja != 5);

    switch (operacja){
        case 1:
            system("@cls||clear"); // Czyszczenie konsoli
            printf("Podaj liczbę mil: ");
            scanf("%f", &wartosc);
            printf("%.3f mil = %.3f km", wartosc, wartosc * mileNaKilometry);
            break;
        case 2:
            system("@cls||clear"); // Czyszczenie konsoli
            printf("Podaj liczbę kilometrów: ");
            scanf("%f", &wartosc);
            printf("%.3f km = %.3f mil", wartosc, wartosc / mileNaKilometry);
            break;
        case 3:
            system("@cls||clear"); // Czyszczenie konsoli
            printf("Podaj liczbę koni mechanicznych: ");
            scanf("%f", &wartosc);
            printf("%.1f KM = %.1f W", wartosc, wartosc * 735.0);
            break;
        case 4:
            system("@cls||clear"); // Czyszczenie konsoli
            printf("Podaj liczbę km/h: ");
            scanf("%f", &wartosc);
            printf("%.2f km/h = %.2f m/s", wartosc, (float)wartosc * 1000.0 / 3600);
            break;
        case 5:
            system("@cls||clear"); // Czyszczenie konsoli
            printf("Podaj liczbę stopni Fahrenheita: ");
            scanf("%f", &wartosc);
            printf("%.1f F = %.1f C", wartosc, ((float)wartosc - 32)*(5.0/9));
            break;
    }

    return 0;
}
