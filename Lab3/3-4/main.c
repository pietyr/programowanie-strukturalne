#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int objetosc_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc);
int pole_powierzchni_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc);
int objetosc_walca(int promien_podstawy, int wysokosc);
int pole_powierzchni_walca(int promien_podstawy, int wysokosc);

int main()
{
    setlocale(LC_ALL, "");  // Dodanie polskich znaków

    return 0;
}

int objetosc_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc){
    return dlugosc_podstawy * szerokosc_podstawy * wysokosc;
}

int pole_powierzchni_prostopadloscianu(int dlugosc_podstawy, int szerokosc_podstawy, int wysokosc){
    return 2 * dlugosc_podstawy * szerokosc_podstawy + 2 * dlugosc_podstawy * wysokosc + 2 * szerokosc_podstawy * wysokosc;
}

int objetosc_walca(int promien_podstawy, int wysokosc){
    return M_PI * pow(promien_podstawy, 2) * wysokosc;
}

int pole_powierzchni_walca(int promien_podstawy, int wysokosc){
    return 2 * M_PI * pow(promien_podstawy, 2) + 2 * M_PI * promien_podstawy * wysokosc;
}
