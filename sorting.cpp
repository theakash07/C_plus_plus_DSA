// This is a simple program to demonstrate the selection sort algorithm
// It sorts an array of integers in ascending order.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   // Initialize an array of integers
   int arr[10] = {2, 3, 33, 22, 44, 55, 66, 77, 99, 11};

   // Iterate through the array to perform selection sort
   for (int i = 0; i < 10; i++) {
       // Find the index of the minimum element in the unsorted portion
       int minindex = i;
       for (int j = i; j < 10; j++) {
           if (arr[j] < arr[minindex]) {
               minindex = j;
           }
       }

       // Swap the minimum element with the current position in the sorted portion
       swap(arr[minindex], arr[i]);
   }

   // Print the sorted array
   cout << "Sorted array:" << endl;
   for (int k = 0; k < 10; k++) {
       cout << arr[k] << endl;
   }

   return 0;
}
