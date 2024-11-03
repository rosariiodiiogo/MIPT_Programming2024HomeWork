// DistinctString.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size;
    int n1, n2 ,n3;
    
    cout << "============ 3 Maximus OF ARRAY ============" << endl;
    
    cout << "Enter the array's size: ";
    cin >> size;
    cout << endl;
    
    int arr[size];
    
    cout << "Enter " << size << " elements of array (Use space or enter to confirm): ";
    for (int i = 1;  i < size; i++)
    {
        cin >> arr[i];
    }
    
    n1 = arr[0];
    n2 = n1;
    n3 = n2;
    for (int i = 0;  i < size; i++)
    {
        if (arr[i] == n1)
        {
            continue;
        }else if (arr[i] > n1){
            n3 = n2;
            n2 = n1;
            n1 = arr[i];
        }else if (arr[i] == n2)
        {
            continue;
        }else if (arr[i] > n2){
            n3 = n2;
            n2 = arr[i];
        }
        else if (arr[i] > n3){
            n3 = arr[i];
        }
    }
    
    cout << "Max_1 = " << n1 << endl;
    cout << "Max_2 = " << n2 << endl;
    cout << "Max_3 = " << n3 << endl;

	return 0;
}