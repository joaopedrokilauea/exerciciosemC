/*4) Fa�a um programa que l� dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro at� o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo at� o primeiro 
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais"*/

#include	<stdio.h>
#include	<locale.h>

int	main()
{
	setlocale(0, "Portuguese");
	
	int	a, b;
	
printf("digite o primeiro valor: ");
scanf("%d", &a);
printf("\n");
printf("digite o segundo valor: ");
scanf("%d", &b);
printf("\n");
if (a<b)
printf("%d %d", a, b); 

else if (b>a)
printf("%d %d", b, a); 

else if (a==b)
printf("Valores iguais"); 
}
