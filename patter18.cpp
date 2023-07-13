// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter number of rows you want:";
    cin>>n;
    cout<<'\n';
    cout<<endl;
    int row=1;
    while(row<=n)
    {
        //space print krlo
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col=col+1;
            
        }
        cout<<"\n";
        row=row+1;
    }
    return 0;
}
