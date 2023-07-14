class Solution {
public:
    int reverse(int x) {
    
        long long int reverse=0;
        while(x!=0)
        {
            int digit=x%10;
            reverse=(reverse*10)+digit;
            x/=10;
        }
       return (reverse > INT_MAX || reverse < INT_MIN) ? 0 : reverse;
        
    }
};

// //Appoach 2
// #include <iostream>
// #include <cmath>

// int main() {   
//     int x;
//     std::cout << "Enter x: ";
//     std::cin >> x;

//     int reversed = 0;
//     for (int temp = x; temp != 0; temp /= 10) {
//         int digit = temp % 10;
//         reversed = reversed * 10 + digit;
//     }

//     std::cout << "The reversed integer is: " << reversed;
//     return 0;
// }
