/*12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem � o mais velho. Considere que essas pessoas possuem idades diferentes.*/

#include	<stdio.h>
#include	<locale.h>

int	main()
{
	setlocale(0, "Portuguese");
	
	int		i1, i2, i3;
	
printf("digite a idade de Pedro: ");
scanf("%d", &i1);
printf("\n");
printf("digite a idade de Joana: ");
scanf("%d", &i2);
printf("\n");
printf("digite a idade de Ismael: ");
scanf("%d", &i3);
printf("\n");
if (i1>i2 && i1 > i3)
printf("Pedro � o mais velho"); 

else if (i2>i1 && i2 > i3)
printf("Joana � a mais velha"); 

else if (i3>i1 && i3 > i2)
printf("Ismael � o mais velho"); 
}
