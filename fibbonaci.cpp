// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Prompt the user to enter the value of N
    int n;
    cout << "Enter value of N: ";
    cin >> n;
    
    // Initialize variables for the Fibonacci sequence
    int a = 0;
    int b = 1;
    
    // Print the initial values of the Fibonacci sequence
    cout << a << " " << b << " ";
    
    // Generate the Fibonacci sequence up to the given value of N
    for (int i = 0; i < n; i++) {
        int sum = a + b;
        cout << sum << " ";
        
        // Update the variables for the next iteration
        a = b;
        b = sum;
    }
   
    return 0;
}
