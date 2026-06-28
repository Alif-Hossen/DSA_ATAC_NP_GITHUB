#include <iostream>
using namespace std;



int main() {

    int x = 3, n = 5;
    double ans = 1;
    long binaryForm = n;

    if( n < 0 ) {
        x = 1/x;
        binaryFrom = -binaryForm;
    }

    while( binaryForm > 0 ) {
        if( binaryForm % 2 == 1 ) {
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    }

    return 0;
}





