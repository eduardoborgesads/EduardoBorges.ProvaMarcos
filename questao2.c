#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char string[30];
	int i, valor;

	printf("Digite uma palavra:");
	gets(string);
	fflush(stdin);

		valor = strlen(string);

			printf(" palavra invertida:");
			for(i = valor -1; i >= 0 ; i--)
			{
				printf("%c", string[i]);
			}

	return EXIT_SUCCESS;
}

