#include <iostream>

using namespace std;

int main()
{
	int suma_p = 0;
	int suma = 0;
	int potencia_s = 0;
	int potencia = 0;
	
	for (int k = 1; k < 101; k++)
	{
		potencia = k*k;
		suma_p += potencia;
	}
	
	for (int k = 1; k < 101; k++)
	{
		suma += k;
		
	}
	
	potencia_s = suma*suma;
	
	cout<< potencia_s -suma_p;
	
	return 0;
}
