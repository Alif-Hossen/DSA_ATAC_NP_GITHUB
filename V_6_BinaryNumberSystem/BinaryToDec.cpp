 #include <iostream>
 using namespace std;

 int binaryToDec ( int num ) {
    int answer = 0, power = 1;

    while ( num > 0 ) {
        int lastDigit = num % 10;
        answer += ( lastDigit * power );

        num /= 10;
        power *= 2;
    }
    return answer;
 }

 int main() {

    int number;
    cout << "Enter Number : " ;
    cin >> number;

    cout <<"Decimal Number Of " << " '" << number << "' " << " Is :->  " << binaryToDec( number );

    return 0;
 }