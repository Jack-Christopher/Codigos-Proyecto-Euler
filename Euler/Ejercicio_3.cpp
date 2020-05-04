#include <iostream>

using namespace std;

int main() 
{
	int long long numero = 600851475143;
	int long long copia_numero = 600851475143;
		
	int long long primo = 0;
	int long long maximo = 0;
	int long long producto = 1;
	
	bool valor = false;
	
	for (int long long k = 2; k < (numero/2)+1; k++)
	{
		while (true)
		{
			if(copia_numero % k == 0)
			{
				primo = k;
				copia_numero /= k;
				producto *= primo;
								
				if(producto == numero) valor = true;
			}
			else
			{
				break;
			}
		}
		
		if (primo > maximo)
		{
			maximo = primo;
		}
		
		if (valor) break;
		
	}
	
	cout<< maximo;

	
	
	return 0;
}
