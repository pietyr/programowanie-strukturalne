#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int odwroc_kolejnosc_cyfry(int liczba);

int main() {
    setlocale(LC_ALL, "");  // Dodanie polskich znaków

    int a, b;

    // Pobranie 3 cyfrowej liczby całkowitej
    do{
        system("@cls||clear"); // Czyszczenie konsoli
        printf("Podaj pierwszą liczbę (100-999): ");
        scanf("%d", &a);
    }while(!(a >= 100 && a <= 999 ));

    // Pobranie 3 cyfrowej liczby całkowitej
    do{
        system("@cls||clear"); // Czyszczenie konsoli
        printf("Podaj drugą liczbę (100-999): ");
        scanf("%d", &b);
    }while(!(b >= 100 && b <= 999 ));

    system("@cls||clear");
    printf("%d | %d - A | B - oryginalne pozycje\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("%d | %d - A | B - zmienione pozycje\n", a, b);

    a = odwroc_kolejnosc_cyfry(a);
    b = odwroc_kolejnosc_cyfry(b);

    printf("%d | %d - A | B - odwrotne cyfry\n", a, b);

    return 0;
}

int odwroc_kolejnosc_cyfry(int liczba){
    int jednosci = liczba % 10;
    liczba -= jednosci;

    int dziesiatki = liczba % 100;
    liczba -= dziesiatki;

    liczba /= 100;
    return liczba + dziesiatki + jednosci * 100;
}
