#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak;
    printf("Podaj dowolny znak ASCII: ");
    scanf("%c", &znak);

    system("@cls||clear");
    printf("-----a)--------------------------\n");
    printf("%c  - Podany znak\n", znak);
    printf("%d  - Kod ASCII tego znaku\n", znak);
    printf("%c  - Znak o kodzie następnym\n", znak + 1);
    printf("---------------------------------\n\n");
    printf("-----b)--------------------------\n");
    if(znak >= 97 && znak <= 122){
        printf("%c  - Zamiana małej litery na dużą\n", znak - 32);
    }else{
        printf("Nie została podana litera mała\n");
    }
    printf("---------------------------------\n");
    return 0;
}
