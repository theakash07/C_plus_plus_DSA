// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

// Function to print an array
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Function to reverse an array
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    
    // Swap elements from both ends until the start and end meet in the middle
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {12, 23, 43, 32, 21, -1};
    int arr1[] = {12, 23, 21, 5, 4};

    // Print the original arrays
    printarray(arr, 6);
    cout << endl;
    printarray(arr1, 5);
    cout << endl;

    // Reverse the first array in-place
    reverse(arr, 6);

    // Output the reversed array
    printarray(arr, 6);

    return 0;
}
