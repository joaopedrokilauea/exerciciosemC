/*22) Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses
dez n�meros em um vetor. Para os valores dos elementos inseridos nas posi��es pares desse
vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores. Em
seguida, o programa dever� apresentar na tela os resultados. */

#include <stdio.h>

#define TAM_ARRAY 10

int main() {

    int numeros[TAM_ARRAY];
    int soma = 0, subtra = 0;


    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("Digite o numero do indice %d da lista: ", i);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < TAM_ARRAY; i++) {
        if(i % 2 == 0) {
            soma += numeros[i];
        } else {
            if(subtra == 0) {

                subtra = numeros[i];
            } else {
                subtra -= numeros[i];
            }
        }
    }

    printf("Soma dos numeros nos indices pares: %d\n", soma);
    printf("Subtracao dos numeros nos indices impares: %d\n", subtra);

    return 0;
}


