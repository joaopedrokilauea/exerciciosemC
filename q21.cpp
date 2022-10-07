/*21) Escreva um programa que leia doze n�meros do tipo inteiro ao usu�rio. Separe esses
n�meros em pares e �mpares e os armazenem em dois outros vetores separando pares e
�mpares, exibindo os resultados na tela. */

#include <stdio.h>

#define TAM_ARRAY 12

int main() {

    int numeros[TAM_ARRAY], impares[TAM_ARRAY], pares[TAM_ARRAY];
    int contarImpar = 0, contarPar = 0;


    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("Digite o numero %d da lista: ", (i + 1));
        scanf("%d", &numeros[i]);
    }

 
    for(int i = 0; i < TAM_ARRAY; i++) {
         if(numeros[i] % 2 == 0) {
            pares[contarPar] = numeros[i];
            contarPar++;
        } else {
            impares[contarImpar] = numeros[i];
            contarImpar++;
        }
    }

    printf("Lista Inteira: ");
    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("%d ", numeros[i]);
    }


    printf("\nLista de Pares: ");
    for(int i = 0; i < contarPar; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nLista de Impares: ");
    for(int i = 0; i < contarImpar; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
