#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int oblicz_stypendium();

int main()
{
    setlocale(LC_ALL, "");
    int stypendium = oblicz_stypendium();
    if(stypendium != 0){
        printf("Student otrzyma stypendium w wysokości %dzł", stypendium);
    }else{
        printf("Student nie otrzyma stypendium");
    }
    return 0;
}

int oblicz_stypendium(){
    float ocena;
    float suma = 0;
    for (int i = 1; i <= 3; i++){
        do{
            printf("Podaj %d ocenę: ", i);
            scanf("%f", &ocena);
        }while(ocena < 2.0 || ocena > 5.0);

        if(ocena < 3.0){
            return 0;
        }else{
            suma += ocena;
        }
    }
    if (suma / 3 > 4.0){
        return 500;
    }else if(suma / 3 > 3.0){
        return 300;
    }else{
        return 0;
    }

}
