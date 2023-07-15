class Solution {
public:
    bool isPowerOfTwo(int n) {
       long long  int ans=1;
        for(int i =0;i<=31;i++)
        {
           
            if(ans==n)
            {
                return true;
            }
            // if(ans<INT_MAX)
             ans = ans*2;
        }
        return false;
    }
};

//approach 2
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int m=n;
//     int count=0;
//     while(n!=0)
//     {
//         int digit=n%2;
//         if(digit==0)
//         {
//             count++;
//         }
//         n=n/2;
//     }
//     if( m==pow(2,count))
//         {
//             cout<<"True";
//         }
//         else
//         {
//             cout<<"False";
//         }
//      return 0;
// }
