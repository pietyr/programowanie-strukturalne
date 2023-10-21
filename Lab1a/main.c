#include <stdio.h>      /*dyrektywy kompilatora*/
#include <stdlib.h>     /*dyrektywy kompilatora*/

int main(int argc, char *argv[]) {      /*funkcja glowna*/
    int ocena;          /*definicja zmiennej o nazwie ocena*/
    ocena = 5;          /*przypisanie zmiennej o wartości 5*/
    /*wyswietlenie na ekranie*/
    printf("Zaczynam programowac w jezyku C\n");
    printf("Z przedmiotu \"Programowanie strukturalne\" otrzymam ocene %d\n", ocena);
    return 0;
}
