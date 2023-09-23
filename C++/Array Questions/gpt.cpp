#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int uniquearray[n];
    int uniquecount = 0;

    cout << "Enter elements to array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int isduplicate = 0;
        for (int j = 0; j < i; j++) { // Changed the loop range to fix the issue
            if (arr[j] == arr[i]) {
                isduplicate = 1;
                break;
            }
        }
        if (!isduplicate) {
            uniquearray[uniquecount++] = arr[i];
        }
    }

    cout << "Array with unique elements: ";
    for (int i = 0; i < uniquecount; i++) {
        cout << uniquearray[i] << " ";
    }
    return 0;
}
