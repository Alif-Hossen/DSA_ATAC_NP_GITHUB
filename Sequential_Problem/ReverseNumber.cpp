#include<iostream>
using namespace std;

int reverseNumber ( int num ) {

    int reversed = 0;

    while( num > 0 ) {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }
    return reversed;

}


int main( ) {

    int number;
    cout << "Enter A Number : ";
    cin >> number;

    int result = reverseNumber( number );
    cout << " The Reversed Number sIs : " << result << endl;

    return 0;
}