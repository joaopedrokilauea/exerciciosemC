/*13) Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares
menores e/ou iguais a esse n�mero e maiores ou igual a um. */

#include <stdio.h>

int main() {

    unsigned int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%u", &n);

    printf("Lista de numeros impares menores e/ou iguais a %d: ", n);
    for(int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
