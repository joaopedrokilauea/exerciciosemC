/*11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse 
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma 
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos � igual a de alunas.*/

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(0, "Portuguese");
	
int m, f, t;

printf("digite o numero de alunos: ");
scanf("%d", &m);

printf("digite o numero de alunas: ");
scanf("%d", &f);

t=m+f;

if (f>m)
printf("o numero de alunas � maior que o de alunos, e a quantidade total de alunos na sala � de %d", t);
else if (f==m)
printf("o numero de alunos e alunas � igual!");
else if (f<m)
printf("o numero de alunos � maior que o numero de alunas!");
else
printf("invalido");



}
