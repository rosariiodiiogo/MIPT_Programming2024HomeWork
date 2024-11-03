// DistinctString.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int rec1[4];
	int rec2[4];
	
	cout << "Enter the values of the 1st rectangle as [x1, y1, x2, y2]:" << endl;;
	for(int i = 0; i < 4; i++)
	{
	    cin >> rec1[i];
	}
	
	cout << "Enter the values of the 2nd rectangle as [x1, y1, x2, y2]:" << endl;;
	for(int i = 0; i < 4; i++)
	{
	    cin >> rec2[i];
	}
	
	if(((rec1[2] - rec2[0] < 0) or (rec1[3] - rec2[1] < 0) or (rec1[3] == rec2[0]))) //  and ((rec2[0] - rec1[2] < 0) or (rec2[1] - rec1[3] < 0) or (rec2[0] == rec1[3]))
	{
	    cout << boolalpha << false << endl;
	}
	else
	{
	    cout << boolalpha << true << endl;
	}
	
	return 0;
}