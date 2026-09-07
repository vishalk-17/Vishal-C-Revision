//Tcs Questiion Convert hexicaldecimal to Decimal
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    char hex[17];
    long long decimal = 0;
    int val, len;

    // Input hexadecimal number

    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    // Find the length of the hexadecimal number

    len = strlen(hex);
    len--;

    // Convert hexadecimal to decimal

    for(int i = 0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }
        decimal += val * pow(16, len);
        len--;
    }
    cout << "Decimal value: " << decimal << endl;
    return 0;
}
