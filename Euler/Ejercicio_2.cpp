#include <iostream>

using namespace std;

int main() 
{
	int lista[100];
	lista[0] = 1;
	lista[1] = 2;
	int k = 1;
	int valor = 0;
	int contador = 0;
	int suma = 0;
	
	while (valor < 4000000)
	{
		lista[k + 1] = lista[k] + lista[k - 1];
		
		valor = lista[k];
		k++;
		contador++;
	}
	
	for (int p = 0; p < contador; p++)
	{
		
		if (lista[p] % 2 == 0) suma += lista[p];
	}
	
	cout<< suma;
	
	
	
	return 0;
}
