#include <iostream>

using namespace std;

bool es_primo(int numero)
{
	for (int k = 2; k < (numero/2)+1; k++)
	{
		if (numero % k == 0)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int contador = 0;
	int k = 2;
	
	while(true)
	{
		if (contador == 10001) 
		{
			break;
		}

		else if(es_primo(k)) 
		{
			contador++;
		}
		
		
		k++;
	}
	
	cout << --k;
	return 0;
}
