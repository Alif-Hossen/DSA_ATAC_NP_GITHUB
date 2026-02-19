#include<iostream>
using namespace std;

int fibonacci(int n) {

    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        next = first;
        first = second;
        second = next + second;
    }

    return first;
}

int main() {

    int number;
    cout << "Enter The Number : ";
    cin >> number;

    cout << "Nth Fibonacci Number: " << fibonacci(number);

    return 0;
}
