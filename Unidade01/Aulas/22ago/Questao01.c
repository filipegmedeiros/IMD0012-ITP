//João Marcos (Exercício 1)

#include <stdio.h>

int main(){

	char entrada[100];

	scanf("%s" , entrada);

	for (int i = 0 ; i < 100 ; i++)
	{
		if (entrada[i] == '\0')
		{
			printf("A string tem o tamanho %d.\n", i );
			break;
		}
	}
}
