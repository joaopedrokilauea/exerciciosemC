/*7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos 
alunos de uma turma (as notas t�m de estar no intervalo [0 10]) e imprime para cada um a 
m�dia das notas. O programa deve parar imediatamente ap�s ter sido digitado o valor 50 para 
a nota da primeira prova.*/

#include <stdio.h>

int main(){

float nota1,nota2,media;

do{

    do{
    printf("Digite a primeira nota:\n");
    scanf("%f",&nota1);

        if(nota1 == 50){
        break;
        }

        printf("Digite a segunda nota:\n");
        scanf("%f",&nota2);

        if((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 >10)){
        printf("Digite novamente as notas!\n\n");
        }

    }while((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 >10));

        if(nota1 == 50){
        break;
        }

        media = (nota1 + nota2)/2;
        printf("Media : %.2f\n\n",media);

    }while(nota1 != 50);

return(0);
}
