
#include<iostream>
using namespace std;

int getFactorial( int num ) {
    int fact = 1;
    
    for ( int i = 1; i <= num; i++ ) {
        fact *= i;
    }
    return fact;
}

int main() {

    int number;

    cout << "Enter The Number : ";
    cin >> number;

    cout << "The Factorial Of Given Number Is : " << getFactorial( number );

    return 0;
}