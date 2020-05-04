#include <iostream>

using namespace std;

bool es_divisible(long long int n)
{
	for (int k = 2; k < 21; k++)
	{
		if (n % k != 0)
		{
			return false;
		}
	}
	return true;
}


int main() 
{
	int long long n = 1;
	int contador = 0;
				
	for(int k = 2; k < 21; k++)
	{
		n *= k;
	}
		
	
	for(int k = 2; k < 21; k++)
	{
		if(es_divisible(n/k)) n/=k;
	}
		
	
		
	cout<< n;
	
	
	return 0;
}
