#include<iostream>
using namespace std;

int sumOfDigits( int digit ) {
    int digitSum = 0;

    while( digit > 0 ) {
        int lastDigit = digit % 10;
        digit /= 10;
        digitSum += lastDigit;
    }

    return digitSum;
}


int main() {

    int digit;
    cout << "Enter The Digit : ";
    cin >> digit;

    cout << "The Sum Of Digit For Input Number : " << sumOfDigits( digit );

    return 0;
}