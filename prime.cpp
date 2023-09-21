<<<<<<< HEAD
=======

>>>>>>> ebc71515548054984b5a48109abf4850d580ba1b
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
