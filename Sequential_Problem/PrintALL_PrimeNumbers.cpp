#include<iostream>
using namespace std;

bool isPrime( int n ) {
    if ( n <= 1 ) {
        return false;
    }

    for( int i = 2; i*i <= n; i++ ) {
        if( n % i == 0 ) {
            return false;
        }
    }
    return true;
}

void printPrimes( int n ) {
    for ( int i = 1; i <= n; i++ ) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {

    int number;
    cout << "Enter Number : ";
    cin >> number;

    printPrimes( number );

    return 0;
}



            // EASY SOLUTION ---->




#include <iostream>
using namespace std;

void printPrimes(int n) {

    for (int i = 2; i <= n; i++) {   

        bool isPrime = true;        

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;    
                break;
            }
        }

        if (isPrime == true) {
            cout << i << " ";
        }
    }
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    printPrimes(n);

    return 0;
}



            // PROFESSIONAL SOLUTION -->


            

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

void printPrimesUpToN(int n) {
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printPrimesUpToN(n);

    return 0;
}



