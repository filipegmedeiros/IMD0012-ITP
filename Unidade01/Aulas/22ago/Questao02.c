//João Marcos (Exercício 2)
#include <stdio.h>

int main(){

	char texto[] = {"\"Lorem ipsum dolor sit amet, consectetur adipiscing elit, Quisque faucibus\""};
	printf("%s\n" , texto);

	printf("Escreva um caractere para verificar se ele está no texto: ");
	char entrada;
	scanf("%c" , &entrada);

	int ocorrencias = 0;
	for (int i = 0 ; i < 100 ; i++)
	{
		if (entrada == texto[i])
		{
			ocorrencias++;
		}
	}

	printf("\nO caractere ocorre no texto %d vezes.\n", ocorrencias );
}
