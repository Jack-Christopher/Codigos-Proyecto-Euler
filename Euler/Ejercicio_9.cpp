#include <iostream>

using namespace std;

bool es_triplete(int a, int b, int c)
{
	if ((a*a)+(b*b) == c*c)
	{
		return true;
	}
	
	return false;
}

int main() 
{
	int resultado = 0;
	int a = 0;
	int b = 1;
	int c = 1;
	int contador = 0;
	
	
	while(true)
	{
		if(c == 1) 
		{
			a++;
			b = 1;
			c = 1000 -(a+b);
		}
		
		if(es_triplete(a,b,c)) 
		{
			cout<<a*b*c;
			break;
			continue;
		}
		b++;
		c--;
		
		
		
	}
	
	return 0;
}
