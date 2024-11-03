// PascalTriangle.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

long long fatorial(int n) {

	long long fatorial = 1;

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

void createArray(int &n)
{
	long long* arr = new long long(n + 1);

	for (int i = 0; i < n+1; i++)
	{
		arr[i] = fatorial(n) / (fatorial(i) * fatorial(n - i));
	}

	for (int i = 0; i < n+1; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main()
{
	cout << "============== PROGRAM ROW OF THE PASCAL's TRIANGLE ==============\n" << endl;

	int n = 0;
	cout << "Enter the Pascal's triangle row that you want to know: ";
	cin >> n;
	cout << endl;
	
	createArray(n);
}