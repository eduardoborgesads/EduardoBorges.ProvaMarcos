#include <stdio.h>
#include <stdlib.h>
int main()
{
int vetor[10];
int i;
float soma = 0;
for (i = 0; i < 10; i++)
{
printf("Digite o numero: ", i+1);
scanf("%d", &vetor[i]);
soma = soma + vetor[i];
vetor[i] = vetor[i] * 2;
}
printf("a media aritmetica eh: %.2f\n", soma/10);
for (i = 0; i < 10; i++)

printf("\n");
return 0;
}
