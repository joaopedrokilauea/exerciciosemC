/*23) Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene
em um vetor, depois o programa dever� apresentar na tela os n�meros na ordem inversa do
qual foram digitados. */

#include <stdio.h>

#define TAM_ARRAY 6

int main() {

    int numeros[TAM_ARRAY];

    printf("Digite seis numeros inteiros: ");
    for(int i = 0; i < TAM_ARRAY; i++) 
        scanf("%d", &numeros[i]);


    printf("Numeros na ordem inversa: ");
    for(int i = (TAM_ARRAY - 1); i >= 0; i --) 
        printf("%d ", numeros[i]);
    

    return 0;
}
