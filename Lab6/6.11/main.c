#include <stdio.h>
#include <stdlib.h>

void kody_ASCII();

int main()
{
    kody_ASCII();
    return 0;
}

void kody_ASCII(){
    int roznica = 'A' - 'a';
    for(char i = 'A'; i <= 'Z'; i++){
        printf("%c -> %i  |  %c -> %i\n", i, i, i - roznica, i - roznica);
    }
}
