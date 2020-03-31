#include "titanic.h"
#include <stdlib.h>
#include <stdio.h>

Terminal* terminal_init(int n, int n_puertas) {

	Terminal* ter = malloc(sizeof(Terminal));
	ter -> n = n;
	ter -> primera = NULL;
	ter -> ultima = NULL;

	for(int i = 0; i < n_puertas; i++) 
	{
		Puerta *puerta = malloc(sizeof(Puerta));
		puerta -> n = i;
		puerta -> primera = NULL;
		puerta -> ultima = NULL;
		puerta -> siguiente = NULL;

		if (ter -> primera == NULL) 
		{
			ter -> primera = puerta;
		}
		else 
		{
			ter -> ultima -> siguiente = puerta;
		}
		ter -> ultima = puerta;
	}
	return ter;
}

void recorrer_puertas(Terminal* ter)
{
	for(Puerta* curr = ter -> primera; curr; curr = curr -> siguiente)
	{
		printf("Puerta n: %i\n", curr -> n);
	}
}

void destruir_terminal(Terminal* ter)
{
	if (ter -> primera)
	{
		Puerta* curr = ter -> primera -> siguiente;
		Puerta* prev = ter -> primera;

		while (curr)
		{
			free(prev);
			prev = curr;
			curr = curr -> siguiente;
		}
		printf("Liberando espacio de puerta %i\n", prev -> n);
		free(prev);
	}
	free(ter);
}