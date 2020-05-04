#include <iostream>

using namespace std;

int main()
{
	
	int *lista = new int[2000000];
	int contador = 2;
	int temp = 0;
	int long long suma = 0;
	
	for (int k = 0; k < 2000000; k++)
	{
		lista[k] = k+1;
	}
	
	lista[0] = -1;
	
	
	
	
	while (contador < 1000000)
	{
		temp = (contador * 2) - 1;
		
		for (int k = temp ; k < 2000000; k += contador)
		{
			lista[k] = -1;
		}
		
				
		for (int k = contador; k < 2000000; k++)
		{
			if(lista[k] != -1)
			{
				contador = lista[k];
				break;
			}
		}
		
	}
	
	
	for (int k = 1; k < 2000001; k++)
	{
		if (lista[k] != -1)
		{
			suma += lista[k];
		}
	}
	

	delete[] lista;
	cout<< suma;
	

	return 0;
}
