// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter number of rows you want:";
    cin>>n;
    cout<<'\n';
    int count=0;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=n;j++)
        {
            count++;
            cout<<"\t"<<count;
        }
        cout<<"\n";
    }
    return 0;
}
