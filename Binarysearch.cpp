// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
   
    int even[6]={12,23,34,45,56,67};
    int odd[5]={11,12,15,16,17};
    
    // int index=binarysearch(even,6,56);
    // cout<<"The index is : "<< index<<endl;
    int index=binarysearch(odd,5,12);
     cout<<"The index is : "<< index<<endl;

    return 0;
}
