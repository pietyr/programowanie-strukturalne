#include <stdio.h>
#include <stdlib.h>

int ile_nie_zdalo(int liczba_studentow);

int main()
{
    int liczba_studentow, nie_zdalo;
    printf("Podaj liczbę studentów: ");
    scanf("%d", &liczba_studentow);
    nie_zdalo = ile_nie_zdalo(liczba_studentow);
    if(nie_zdalo == 0){
        printf("Wszyscy zdali!\n");
    }else{
        printf("Nie zdało %d osób\n", nie_zdalo);
    }
    return 0;
}

int ile_nie_zdalo(int liczba_studentow){
    int nie_zdalo = 0;
    float ocena;
    for(int i = 0; i < liczba_studentow; i++){
        printf("Podaj ocenę studenta %d: ", i);
        scanf("%f", &ocena);
        if(ocena < 3.0){
            nie_zdalo++;
        }
    }
    return nie_zdalo;
}
