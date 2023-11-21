#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int wybor = -1;
    do{
        system("@cls||clear");
        printf("=== MENU ===\n");
        printf("1. Wywołaj funkcję\n");
        printf("2. Ustawienia\n");
        printf("3. Pomoc\n");
        printf("0. Zakończ program\n");
        printf("============\n");

        printf("Co chcesz zrobić: ");
        scanf("%d", &wybor);

        switch(wybor){
            case 1:
                system("@cls||clear");
                printf("Wywołano funkcję\n");
                printf("Naciśnij ENTER, aby powrócić ");
                getchar();
                getchar();
                break;
            case 2:
                system("@cls||clear");
                printf("Zmieniono ustawienia\n");
                printf("Naciśnij ENTER, aby powrócić ");
                getchar();
                getchar();
                break;
            case 3:
                system("@cls||clear");
                printf("Pomoc: \n");
                printf("Ta sekcja jest w budowie\n");
                printf("Naciśnij ENTER, aby powrócić ");
                getchar();
                getchar();
                break;
        }
    }while(wybor != 0);

    return 0;
}
