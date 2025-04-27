#include <iostream>
using namespace std;

int sumN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumN(n - 1);
}
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void printBinary(int n) {
    if (n == 0) {
        return;
    }
    printBinary(n / 2);
    cout << (n % 2) << " ";
}
int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}
void printReverse(int arr[], int size) {
    if (size == 0) {
        return;
    }
    cout << arr[size - 1] << " ";
    printReverse(arr, size - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The sum of the first " << n << " natural numbers is: " << sumN(n) << endl;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    cout << "The binary representation of " << n << " is: ";
    if (n == 0) {
        cout << "0";
    } else {
        printBinary(n);
    }
    cout << endl;

    cout << "The sum of the digits of " << n << " is: " << sumDigits(n) << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The array in reverse order is: ";
    printReverse(arr, size);
    cout << endl;

    return 0;
}