#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int jaki_kwartal(int miesiac);

int main()
{
    int miesiac;
    setlocale(LC_ALL, "");


    do{
        printf("Podaj miesiąc roku (1-12): ");
        scanf("%d", &miesiac);
    }while(miesiac < 1 || miesiac > 12);

    printf("Miesiąc %d należy do %d kwartału\n", miesiac, jaki_kwartal(miesiac));

    return 0;
}

int jaki_kwartal(int miesiac){
    if(miesiac > 12 || miesiac < 1){
        return -1;
    }
    return miesiac % 3 == 0 ? miesiac / 3 : miesiac / 3 + 1;
}
