#include<iostream>
using namespace std;

int fibonacci(int n) {

    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    int first = 0, second = 1, next;

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}

int main() {

    int number;
    cout << "Enter The Number : ";
    cin >> number;

    cout << "Nth Fibonacci Number: " << fibonacci(number);

    return 0;
}