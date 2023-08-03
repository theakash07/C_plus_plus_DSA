#include <iostream>
using namespace std;

int main() {
    
    int a[5];
    //array user input
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    //array insertion 
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
    
    //element finding or linear search
    int element=10;
    for(int i=0;i<5;i++)
    {
        if( a[i]==element)
        {
            cout<<"the element is at"<<i<<"index"<<endl;
        }
    }
    cout<<endl;
    
    //element deletion
    cout<<"Enter elemetn position you want to delete"<<endl;
    int pos;
    cin>>pos;
    if (pos > 5 and pos <0 )
    {
        cout<<"There is no position in the array"<<endl;
    }
    else
    {
       for(int i=pos;i<5-1;i++)
     {
            a[i]=a[i+1];
     }
    }
    for(int i=0;i<5-1;i++)
    {
        cout<<a[i]<<"\t";
    }
    
    

    return 0;
}
