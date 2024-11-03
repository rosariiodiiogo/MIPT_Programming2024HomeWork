// BinaryDecimal.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <math.h>

using namespace std;

int binaryDecimal(int b)
{
    int binary = b;
    int decimal = 0;
    int digits;
    int a = 0;
    int counter = 0;
    int number;

    digits = binary;
    number = binary;

    while (digits > 0) {
        digits /= 10;
        counter++;
    }

    while (counter > 0)
    {
        digits = number / pow(10, counter - 1);
        if (digits % 10 == 0)
        {
            a = 0;
        }
        else
        {
            a = binary / pow(10, counter - 1);
        }

        decimal += a * pow(2, counter - 1);
        binary /= 10;
        counter--;
    }
    
    return decimal;
}

void decimalBinary(int decimal)
{
    //Conversion to binary
    int binary;
    int decB = decimal;
    int bCount = 0;
    for (unsigned int k = 0; k < 9; k++)
    {
        if (decB == 0 and bCount == 10)
        {
            break;
        }

        for (int j = 9; j >= 0; j--)
        {
            int potencia = pow(2, j);

            if (decB >= (pow(2, j)))
            {
                binary = decB / pow(2, j);
                cout << binary;
                decB = decB % potencia;
                ++bCount;
            }
            else
            {
                cout << "0";
                ++bCount;
            }

            if (decB == 0)
            {
                break;
            }
        }
    }
}

int main()
{
    int sum = 0;
    int binary1;
    int binary2;
    cout << "Input the first binary number (an integer containing only 0s and 1s): ";
    cin >> binary1;
    
    cout << "Input the second binary number: ";
    cin >> binary2;
    
    sum = binaryDecimal(binary1) + binaryDecimal(binary2);
    
    cout << "Binary sum = ";
    decimalBinary(sum);
    
}