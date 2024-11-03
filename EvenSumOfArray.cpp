// DistinctString.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size;
    int sum = 0;
    
    cout << "============ PROGRAM SUM OF EVEN NUMBERS OF ARRAY ============" << endl;
    
    cout << "Enter the array's size: ";
    cin >> size;
    cout << endl;
    
    int arr[size];
    
    cout << "Enter " << size << " elements of array (Use space or enter to confirm): ";
    for (int i = 0;  i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0;  i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    
    cout << "Sum = " << sum << endl;

	return 0;
}