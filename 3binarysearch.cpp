#include <iostream>
using namespace std;

int rightoccurence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == array[mid])
        {
            ans = mid;
            start = mid + 1; // Move towards the right
        }
        //right me jao
        else if (key > array[mid])
        {
            start = mid + 1;
        }
        //left me jao
        else
        {
            end = mid - 1; // Move towards the left
        }
    }
    return ans;
}


int leftoccurence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == array[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else // Remove the 'else' statement
        {
            start = mid + 1;
        }
    }
    return ans;
}


int main()
{
    int even[11] = {2,4,6,8,8,8,8,8,8,8,9};

    int index = rightoccurence(even, 11, 8);
    cout << "The right occurence is: " << index << endl;
    int oddy=leftoccurence(even,11,8);
    cout<<"The leftt occurence is "<<oddy<<endl;

    return 0;
}
