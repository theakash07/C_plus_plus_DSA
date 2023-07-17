// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    
    // Declare variable 'a' to store user input
    int a;
    
    // Take input from the user
    cin >> a;
    
    // Declare variables for iteration and storing the answer
    int i = 0, ans = 0;
    
    // Loop to convert decimal to binary
    while (a != 0) {
        // Extract the least significant bit
        int bit = a % 10;
        
        // Check if the bit is 1
        if (bit == 1) {
            // Calculate the corresponding power of 2 and add to the answer
            ans = ans + pow(2, i);
        }
        
        // Remove the least significant bit
        a = a / 10;
        
        // Increment the power of 2
        i++;
    }
    
    // Print the final binary result
    cout << ans;

    return 0;
}
