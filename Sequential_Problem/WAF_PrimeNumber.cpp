#include<iostream>
using namespace std;

bool checkPrimeNumber ( int num ) {

    if ( num <= 1 ) {
        return false;
    }

    for( int i = 2; i * i <= num; i++ ) {
        if( num % i == 0 ) {
            return false;
        }
    }
    return true;

}

int main(){

    int number;
    cout << "Enter A Number : ";
    cin >> number;

    if( checkPrimeNumber(number) ) {
        cout << " This Number Is A prime Number..!";
    } else {
        cout << "This Number Is Not A Prime Number.!";
    }

    return 0;
}



// ANOTHER SOLUTION FOR A NUMBER IS PRIME OR NOT.....




#include<iostream>
using namespace std;

bool checkPrimeNumber(int num) {

    if (num <= 1) {
        return false;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) { 
            return false;
        }
    }

    return true;
}

int main() {

    int number;
    
    cout << "Enter A Number To Check A Number Is Prime Or Not : ";
    cin >> number;

    bool result = checkPrimeNumber(number);   

    if (result == true) {
        cout << "This Number Is A Prime Number..!";
    } 
    else {
        cout << "This Number Is Not A Prime Number..!";
    }

    return 0;
}




// ANOTHER SOLUTION FOR A NUMBER IS PRIME OR NOT.....



#include <iostream>
using namespace std;

bool isPrime(int n) {

    if (n <= 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}


