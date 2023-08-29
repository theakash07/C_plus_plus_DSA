#include <iostream>
using namespace std;

void toBinary(int num)
{
    
    int i = 0;  
    long int answer[32];
    while (num > 0)
    {
        answer[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)  
    {
        cout << answer[j];  
    }
    cout << endl;  
}

void toOctal(int num)
{
    int i=0;
    long int answer[32];
    while (num > 0)
    {
        answer[i] = num % 8;
        num = num / 8;
        i++;
    }
    
     for (int j = i - 1; j >= 0; j--)  
    {
        cout << answer[j];  
    }
    cout << endl; 
 
}
void toHex(int num)
{
    int answer[32];  // Array to store remainders
    int ctr = 0;  // Counter for array

    while (num > 0)
    {
        answer[ctr] = num % 16;
        num = num / 16;
        ctr++;
    }

    cout << "Hexadecimal representation: ";
    for (int i = ctr - 1; i >= 0; i--)
    {
        if (answer[i] < 10)
        {
            cout << answer[i];
        }
        else
        {
            cout << char('A' + answer[i] - 10);
        }
    }
    cout << endl;
}
int main()
{
    int num;
    cout << "Please enter a decimal: ";
    cin >> num;
    
    toBinary(num); 
    toOctal(num);
    toHex(num);
    return 0;
}



