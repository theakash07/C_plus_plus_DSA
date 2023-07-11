//Approact 1
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int i = 0;

    // Outer loop to control the number of rows
    while (i < n) {
        int j = n;

        // Inner loop to print asterisks in each row
        while (j > i) {
            cout << "*";

            j--;
        }

        cout << endl;

        i++;
    }

    return 0;
}
//Approach 2

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = n; j > i; j--) {
//             cout << '*';
//         }
//         cout << endl;
//     }

//     return 0;
// }
