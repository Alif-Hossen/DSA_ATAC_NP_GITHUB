#include <iostream>
using namespace std;

int decToBinary ( int num ) {
    int answer = 0, power = 1;
    while( num > 0 ) {
        int reminder = num % 2;
        num = num / 2;

        answer = answer + ( reminder * power );
        power = power * 10;
    }
    return answer;
}

int main() { 

    int number;
    cout << "Enter A Number : ";
    cin >> number;

    cout << "The binary number of " << number << " is : " << decToBinary( number );

    // for ( int i = 1; i <= 10; i++ ) {
    //     cout << decToBinary ( i ) << endl;
    // }

    return 0;
}