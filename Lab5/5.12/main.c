#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sprawdz_znak(char znak);

int main()
{
    setlocale(LC_ALL, "");
    char znak;
    printf("Podaj dowolny znak: ");
    scanf(" %c", &znak);
    sprawdz_znak(znak);
    return 0;
}

void sprawdz_znak(char znak){
    if(znak == '$'){
        printf("Znak dolara\n");
    }
    if(znak >= '0' && znak <= '9'){
        printf("Cyfra\n");
    }
    if(znak >= 'a' && znak <= 'z'){
        printf("Mała litera\n");
    }
    if(znak >= 'A' && znak <= 'Z'){
        printf("Wielka litera\n");
    }
    if(znak == '+' || znak == '-' || znak == '/' || znak == '*'){
        printf("Podstawowy operator matematyczny\n");
    }
}
