#include <iostream>
using namespace std;


int main() {
    
    cout << sizeof(int) << endl ;  // 4 byte
    cout << sizeof(long long int) << endl ;  // 8 byte
    cout << sizeof(short int) << endl ;  // 2 byte  

    // SIGNED -->
        // negative
        // -2^31  -  +2^31-1

    // UNSIGNED -->      
        // ( positive )
        // 0 to 2^32-1  

        unsigned int x = -10;
        cout <<"x = " x << endl;
 
    return 0;

}