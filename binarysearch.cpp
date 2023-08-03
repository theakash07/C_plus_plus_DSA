#include <iostream>
using namespace std;

int binarysearch(int array[],int size,int key)
{
    int start=0;
    int end=size-1;
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(array[mid]==key)
        {
            return mid;
        }
       // go to right wala part....
       if(key > array[mid])
       {
           start=mid+1;
       }
       else
       {
           end=mid-1;
       }
        
    }
    return -1;
    
    
}
int main()
{
   int even[6]={2,4,6,8,10,12};
   int odd[6]={3,5,7,9,11,13};
   
   int index=binarysearch(even,6,10);
   cout<<"The index of 10 is : "<<index<<endl;
   
   int oddy=binarysearch(odd,6,9);
   cout<<"The index of 9 is: "<<oddy<<endl;

    
    return 0;
}
