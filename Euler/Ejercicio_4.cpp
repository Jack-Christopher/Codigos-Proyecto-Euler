#include <iostream>

using namespace std;

bool es_palindromo(int numero)
{
	int lista[6];
	int numero2 = numero;
	int contador = 0;
	float temp;
	int temp2;
	int temp3;
	
	while(true)
	{
		if(numero2 < 10)
		{
			lista[contador] = numero2;
			break;
			continue;
		}
		
		lista[contador] = numero2 % 10;
		numero2 /= 10;
		
		contador++;
	}
	
	temp = (contador/2.0)+0.5;
	temp2 = temp;
	temp3 = contador--;
	
	for (int k = 0; k < temp2; k++)
	{
		if(lista[k] != lista[k+temp3])
		{
			return false;
		}
		temp3 -= 2;
	}
	
	
	
	return true;
	
	
}

int main() 
{
	int producto = 0;
	int maximo = 0;
	
	for(int k = 999; k >0; k--)
	{
		for(int m = 999; m >0; m--)
		{
			producto = k * m;
			
			if((es_palindromo(producto)) && (producto > maximo))
			{
				maximo = producto;
			}
		}
	}
	
	cout<< maximo;
	
	return 0;
}
