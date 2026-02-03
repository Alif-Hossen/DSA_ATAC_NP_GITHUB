

#include<iostream>
using namespace std;

int calculateSumOfArray( int array[], int size) {
    int sum = 0;
    for( int i=0; i<size; i++) {
        sum = sum + array[i];
    }
    return sum;
}

int calculateProductOfArray( int array[], int size ) {
    int product = 1;
    for ( int i = 0; i<size; i++) {
        product = product * array[i];
    }
    return product;
}

int main() {

    int array[] = {1,3,4,6,9,5,7,2};
    int size = 8;

    int sum = calculateSumOfArray(array, size);
    cout << "The Sum Of All Digits Of This Array Is : " << sum << endl;

    int multi = calculateProductOfArray(array, size);
    cout << "The Product Of All Digits Of This Array Is : " << multi << endl;

    return 0;
}

