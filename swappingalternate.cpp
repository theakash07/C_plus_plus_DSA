#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7};
    int start;
    int next;
    int i = 0;
    
    // Swap adjacent elements in the array using a while loop
    while (i < 6)
    {
        start = i;
        next = i + 1;
        swap(arr[start], arr[next]); // Swap elements at positions 'start' and 'next'
        i = i + 2; // Move to the next pair of adjacent elements
    }
    
    // Print the modified array
    for (int j = 0; j < 6; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    
    return 0;
}
