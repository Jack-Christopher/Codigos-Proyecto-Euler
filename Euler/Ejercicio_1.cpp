#include <iostream>

using namespace std;


int main()
{
	int suma = 0;
	
	for (int k = 0; k < 1000; k++)
	{
		if ((k % 3 == 0) || (k % 5 == 0))
		{
			suma += k;
		}
	}
	
	cout<< suma;

	return 0;
}
