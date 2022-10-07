/*14) A convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, em que Tc
� a temperatura em Celsius e Tf em Fahrenheit. Fa�a um programa C que calcule e que
imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de
1 em 1. */

#include <stdio.h>

int main() {


    int tempFahrenheit = 104;
    float tempCelsius;

    printf("tF\ttC\n");

    for(tempFahrenheit, tempCelsius; tempCelsius < 75; tempFahrenheit++) {
        tempCelsius = (tempFahrenheit - 32.0) * (5.0 / 9.0);
        printf("%d\t%.1f\n", tempFahrenheit, tempCelsius);
    }

    return 0;
}
