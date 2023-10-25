#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float x;
    printf("Podaj wartość x: ");
    scanf("%f", &x);

    float a = 10 * cos(x) - 0.1 * pow(x, 2) + sin(x) + sqrt(4 * pow(x, 2) + 7);
    float b = log(x + 5) + exp(x + 1) - abs(tan(x) + 1);
    float c = (pow(sin(x), 2) + 0.5) / (pow(cos(x), 4) + pow(tan(pow(x, 2)), 4));
    float d = sqrt((abs(5 * sin(pow(x, 5)) + 1)) / (3.5 * pow((sin(x) + cos(x)), 2)));

    printf("a) = %.3f\n", a);
    printf("b) = %.3f\n", b);
    printf("c) = %.3f\n", c);
    printf("d) = %.3f\n", d);
    return 0;
}
