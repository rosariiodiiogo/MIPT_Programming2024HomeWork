// PascalTriangle.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int fatorial(int n) {

	int fatorial = 1;

	for (int i = 0; i <= n; i++)
	{
		if (i == 0 or i == 1) 
		{
			fatorial = 1;
		}
		else
		{
			fatorial *= i;
		}
	}

	return fatorial;
}
int main()
{
	for (int i = 1; i <= 10; i++)
	{
	    cout << i << "! = " << fatorial(i) << endl;
	}
}