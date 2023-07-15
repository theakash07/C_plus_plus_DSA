// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    // Write C++ code here
    long long int a;
    cin>>a;
    int count=0;
    int ans=0;
    
    for (int i=0;a>0;i++){
        
             int b=a%2;//while converting decimal to binary we modulo decimal by 2.
           a=a/2;
           ans=(b*pow(10,i))+ans;
      /*
      can use this logic as well 
      int b=a&1;
      a=a>>1;
        */
           
           
    }
    cout<<ans;
    

    return 0;
}
