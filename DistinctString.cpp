// DistinctString.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;

string* createArray(int n)
{
	string* arr = new string[n];

	cout << "Enter " << n << " strings for the array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i+1 << " string: ";
		cin >> arr[i];
		cout << "";
	}

	cout << endl;

	return arr;
}

void distinctString(string arr[], int n) {

	string* arr2 = new string[n];
	int position = 0;

	int k;
	cout << "Enter the \"kth\" distinct string you want to know: ";
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		arr2[i] = " ";
	}

	for (int i = 0; i < n; i++)
	{
		int counter = 0;
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				continue;
			}
			else {
				if (arr[i] == arr[j])
				{
					counter++;
					break;
				}
			}
		}

		if (counter == 0)
		{
			arr2[position] = arr[i];
			position++;
		}

	}

	if (k <= n)
	{
		if (arr2[k - 1] == " ")
		{
			cout << "\" \"" << endl;
		}
		else
		{
			cout << arr2[k - 1] <<endl;
		}
	}
	else 
	{
		cout << "This number \" " << k << " \" is larger than array size.";
	}
}

int main()
{
	int n = 0;

	cout << "=========== DISTINCT STRING PROGRAM ===========\n" << endl;

	while (n <= 0)
	{
		cout << "Enter the array size (positive integer): ";
		cin >> n;
	}
	cout << endl;
	string* arr = createArray(n);

	distinctString(arr, n);

	delete[] arr;
	return 0;
}