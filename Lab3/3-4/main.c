#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int objetosc_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc);
int pole_powierzchni_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc);
float objetosc_walca(int promien_podstawy, int wysokosc);
float pole_powierzchni_walca(int promien_podstawy, int wysokosc);

int main() {
    // Deklaracje zmiennych
    int bryla;
    int typ_operacji;
    int dlugosc_podstawy;
    int szerokosc_podstawy;
    int wysokosc;

    setlocale(LC_ALL, "");  // Dodanie polskich znaków

    // Wybór bryły
    do{
        system("@cls||clear"); // Czyszczenie konsoli
        printf("1. Sześcian.\n");
        printf("2. Prostopadłościan o podstawie kwadratowej.\n");
        printf("3. Prostopadłościan o podstawie prostokątnej.\n");
        printf("4. Walec.\n");
        printf("Wybierz bryłę: ");
        scanf("%d", &bryla);
    }while(bryla != 1 && bryla != 2 && bryla != 3 && bryla != 4);

    // Wybór typu operacji
    do{
        system("@cls||clear"); // Czyszczenie konsoli
        printf("1. Pole powierzchni.\n");
        printf("2. Objętość.\n");
        printf("Wybierz typ operacji: ");
        scanf("%d", &typ_operacji);
    }while (typ_operacji != 1 && typ_operacji != 2);

    // Pobranie wielkości boków i wykonanie obliczeń w zależności od wybranych opcji
    switch (bryla){
        case 1: // SZEŚCIAN
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj bok sześcianu: ");
                scanf("%d", &wysokosc);
            }while (wysokosc <= 0);
            if(typ_operacji == 1){
                printf("Pole powierzchni sześcianu o boku %d = %d\n", wysokosc, pole_powierzchni_prostopadloscianu(wysokosc, wysokosc, wysokosc));
            }else{
                printf("Objętość sześcianu o boku %d = %d\n", wysokosc, objetosc_prostopadloscianu(wysokosc, wysokosc, wysokosc));
            }
            break;
        case 2: // PROSTOPADŁOŚCIAN o podstawie KWADRATOWEJ
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj długość podstawy prostopadłościanu: ");
                scanf("%d", &dlugosc_podstawy);
            }while (dlugosc_podstawy <= 0);
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj wysokość prostopadłościanu: ");
                scanf("%d", &wysokosc);
            }while (wysokosc <= 0);
            if(typ_operacji == 1){
                printf("Pole powierzchni prostopadłościanu o podstawie %d i wysokości %d = %d\n", dlugosc_podstawy, wysokosc, pole_powierzchni_prostopadloscianu(dlugosc_podstawy, dlugosc_podstawy, wysokosc));
            }else{
                printf("Objętość prostopadłościanu o podstawie %d i wysokości %d  = %d\n", dlugosc_podstawy, wysokosc, objetosc_prostopadloscianu(dlugosc_podstawy, dlugosc_podstawy, wysokosc));
            }
            break;
        case 3: // PROSTOPADŁOŚCIAN o podstawie PROSTOKĄTNEJ
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj długość podstawy prostopadłościanu: ");
                scanf("%d", &dlugosc_podstawy);
            }while (dlugosc_podstawy <= 0);
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj szerokość podstawy prostopadłościanu: ");
                scanf("%d", &szerokosc_podstawy);
            }while (szerokosc_podstawy <= 0);
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj wysokość prostopadłościanu: ");
                scanf("%d", &wysokosc);
            }while (wysokosc <= 0);
            if(typ_operacji == 1){
                printf("Pole powierzchni prostopadłościanu o podstawie %d x %d i wysokości %d = %d\n", dlugosc_podstawy, szerokosc_podstawy, wysokosc, pole_powierzchni_prostopadloscianu(dlugosc_podstawy, szerokosc_podstawy, wysokosc));
            }else{
                printf("Objętość prostopadłościanu o podstawie %d x %d i wysokości %d  = %d\n", dlugosc_podstawy, szerokosc_podstawy, wysokosc, objetosc_prostopadloscianu(dlugosc_podstawy, szerokosc_podstawy, wysokosc));
            }
            break;
        case 4: // WALEC
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj promień podstawy walca: ");
                scanf("%d", &dlugosc_podstawy);
            }while (dlugosc_podstawy <= 0);
            do{
                system("@cls||clear"); // Czyszczenie konsoli
                printf("Podaj wysokość walca: ");
                scanf("%d", &wysokosc);
            }while (wysokosc <= 0);
            if(typ_operacji == 1){
                printf("Pole walca o podstawie o promieniu %d i wysokości %d = %.2f\n", dlugosc_podstawy, wysokosc, pole_powierzchni_walca(dlugosc_podstawy, wysokosc));
            }else{
                printf("Objętość walca o podstawie o promieniu %d i wysokości %d  = %.2f\n", dlugosc_podstawy, wysokosc, objetosc_walca(dlugosc_podstawy, wysokosc));
            }
            break;
    }


    return 0;
}

int objetosc_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc){
    return dlugosc_podstawy * szerokosc_podstawy * wysokosc;
}

int pole_powierzchni_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc){
    return 2 * dlugosc_podstawy * szerokosc_podstawy + 2 * dlugosc_podstawy * wysokosc + 2 * szerokosc_podstawy * wysokosc;
}

float objetosc_walca(int promien_podstawy, int wysokosc){
    return M_PI * pow(promien_podstawy, 2) * wysokosc;
}

float pole_powierzchni_walca(int promien_podstawy, int wysokosc){
    return 2 * M_PI * pow(promien_podstawy, 2) + 2 * M_PI * promien_podstawy * wysokosc;
}
