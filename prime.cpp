//approach 1
#include <iostream>
using namespace std;

int main() {
   int i = 1;
   int n;
   cout << "Enter number: ";
   cin >> n;
   int count = 0;
   int temp = 0;
   int mod;

   // Loop to iterate from 1 to n
   while (i <= n) {
       mod = n % i;

       // Check if the remainder is greater than or equal to 1
       if (mod >= 1) {
           count++;
           cout << count << endl;
       } else {
           temp++;
           cout << "temp" << temp << endl;
       }
       i++;
   }

   // Check if the count of factors is equal to 2
   if (temp == 2) {
       cout << "It's a prime number: " << n << endl;
   } else {
       cout << "It's not a prime number." << endl;
   }

   return 0;
}

//Approach 2
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    bool isPrime = true;  // Assume the number is prime

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;  // If a factor is found, the number is not prime
            break;
        }
    }

    if (isPrime && n > 1) {
        cout << "It's a prime number: " << n << endl;
    } else {
        cout << "It's not a prime number." << endl;
    }

    return 0;
}
//approach 2
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter Limit";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
            {
                cout<<i<<endl;
            }
    }
    
    return 0;
    
}
