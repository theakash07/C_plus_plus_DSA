// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits> // Required to use INT_MAX and INT_MIN constants
using namespace std;

// Function to find the minimum element in the array
int getmin(int arr[], int size)
{
    int mini = INT_MAX; // Initialize the minimum with the maximum possible integer value
    
    // Loop through the array to find the minimum element
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]); // Find the minimum between the current minimum and the current element of the array
        // The "min" function is a built-in C++ function that returns the minimum of two values
        // If the current element is smaller than the current minimum, update the minimum value
    }
    
    return mini; // Return the minimum value found
}

// Function to find the maximum element in the array
int getmax(int arr[], int size)
{
    int maxi = INT_MIN; // Initialize the maximum with the minimum possible integer value
    
    // Loop through the array to find the maximum element
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]); // Find the maximum between the current maximum and the current element of the array
        // The "max" function is a built-in C++ function that returns the maximum of two values
        // If the current element is larger than the current maximum, update the maximum value
    }
    
    return maxi; // Return the maximum value found
}

int main() {
    int size;
    cin >> size; // Read the size of the array from the user
    
    int num[100]; // Declare an array to store the integers
    for (int i = 0; i < size; i++)
    {
        cin >> num[i]; // Read the elements of the array from the user
    }
    
    // Call the functions to find the maximum and minimum elements in the array
    cout << "THE maximum element is : " << getmax(num, size) << endl;
    cout << "THE minimum element is : " << getmin(num, size) << endl;
    
    return 0;
}
