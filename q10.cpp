/*10) Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par 
ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se 
� ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor 
que 50.*/

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(0, "Portuguese");
	
int n;


printf("digite um numero qualquer: ");
scanf("%d", &n);

if (n%2==0 && n>15)
printf("numero par e maior que 15");
else if (n%2==0 && n<15)
printf("numero par e menor que 15");
else if (n%2!=0 && n>50)
printf("numero impar e maior que 50");
else if (n%2!=0 && n<50)
printf("numero impar e menor que 50");
else
printf("invalido");



}
