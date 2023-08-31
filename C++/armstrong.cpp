#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digit;
    int sum = 0;
    int og_n = n;

    // Calculate the number of digits
    int numDigits = 0;
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    while (n != 0) {
        digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    if (sum == og_n) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}
