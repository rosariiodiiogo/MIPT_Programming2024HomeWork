// MatrixDimensions.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
    int m; //rows
    int n; //columns
    
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "";
    
    cout << "Enter the number of columns: ";
    cin >> n;
    cout << "";
    
    int a[m][n];
    int b[m][n];
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[i][j] = -1;
        }
    }
    
    cout << "Enter the head numbers (999 to exit): " << endl;
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int number;
            cin >> number;
            if(number != 999)
                b[i][j] = number;
            else
            {
                i = m;
                j = n;
            }
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = b[i][j];
        }
    }
    
    int sr = 0;
    int er = m - 1;
    int sc = 0;
    int ec = n - 1;
    
    while(sc <= ec && sr <= er){
    
        for(int i = sc; i <= ec; i++)
        {
            cout << a[sr][i] << " ";
        }
        sr++;
        
        if(sr <= er)
        {
            for(int j = sr; j <= er; j++)
            {
                cout << a[j][ec] << " ";
            }
        }
        ec--;
        
        
        if (ec >= sc)
        {
            for (int k = ec; k >= sc; k--)
            {
                cout << a[er][k] << " ";
            }
        }
        er--;
        
        if(er  >= sr)
        {
            for (int l = er; l >= sr; l--)
            {
                cout << a[l][sc] << " ";
            }
        }
        sc++;
    
    }
    
    return 0;
}