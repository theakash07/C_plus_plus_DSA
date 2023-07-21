#include <iostream>
using namespace std;

// Function to find the first occurrence of 'key' in a sorted array 'arr' of size 'size'.
int firstOcc(int arr[], int size, int key) {
    int s = 0;              // Initialize start index of the search range.
    int end = size - 1;     // Initialize end index of the search range.
    int mid;                // Variable to store the middle index.
    int ans = -1;           // Variable to store the index of the first occurrence, initialized to -1.

    // Perform binary search until the search range is valid.
    while (s <= end) {
        mid = s + (end - s) / 2;    // Calculate the middle index to divide the search range.

        // If the middle element is equal to 'key', update the answer and continue the search in the left half.
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;          // Update 'end' to continue searching in the left half.
        }
        // If the middle element is less than 'key', update the start index to search in the right half.
        else if (arr[mid] < key) {
            s = mid + 1;
        }
        // If the middle element is greater than 'key', update the end index to search in the left half.
        else {
            end = mid - 1;
        }
    }
    return ans;   // Return the index of the first occurrence, or -1 if 'key' is not found.
}

// Function to find the last occurrence of 'key' in a sorted array 'arr' of size 'size'.
int lasttOcc(int arr[], int size, int key) {
    int s = 0;              // Initialize start index of the search range.
    int end = size - 1;     // Initialize end index of the search range.
    int mid;                // Variable to store the middle index.
    int ans = -1;           // Variable to store the index of the last occurrence, initialized to -1.

    // Perform binary search until the search range is valid.
    while (s <= end) {
        mid = s + (end - s) / 2;    // Calculate the middle index to divide the search range.

        // If the middle element is equal to 'key', update the answer and continue the search in the right half.
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;             // Update 's' to continue searching in the right half.
        }
        // If the middle element is less than 'key', update the start index to search in the right half.
        else if (arr[mid] < key) {
            s = mid + 1;
        }
        // If the middle element is greater than 'key', update the end index to search in the left half.
        else {
            end = mid - 1;
        }
    }
    return ans;   // Return the index of the last occurrence, or -1 if 'key' is not found.
}

int main() {
    int arr[8] = {4, 4, 4, 5, 5, 7, 9, 10};   // Sorted array containing duplicate elements.
    int key = 5;                             // The key whose occurrences need to be found.

    int index = firstOcc(arr, 8, key);       // Call 'firstOcc' function to find the first occurrence.
    cout << "The first occurrence of " << key << " at " << index << endl;

    int lastIndex = lasttOcc(arr, 8, key);   // Call 'lasttOcc' function to find the last occurrence.
    cout << "The last occurrence of " << key << " at " << lastIndex << endl;

    int occurrence = (lastIndex - index) + 1;  // Calculate the total number of occurrences.
    cout << "The total number of occurrences is " << occurrence << endl;

    return 0;
}
