// [1, 2, 3, 4, 5 ]
    // ALL POSSIBLE SUBARRAY ->

        // 1,    2,   3,   4,  5
        // 12,   23,  34,  45
        // 123,  234, 345
        // 1234, 2345
        // 12345

// SUBARRAY -> n( n + 1 ) / 2

// SubArray -> Continuos Part Of Array ->

    //   Start              End ( st to n-1 )
    //1.   0          0, 1, 2, 3, 4, 5 
    //2.   1          1, 2, 3, 4
    //3.   2          2, 3, 4
    //4.   3          3, 4, 5
    //5.   4          4, 5
    //6.   5          5

        // 1. -->  Start - 0
            // (0 - 0)
                //( 0 te start 0 tei end ) = single element = 1
            // (0 - 1)
                //( 0 te start 1 tei end ) = element = 1, 2
            // (0 - 2)
                //( 0 te start 2 tei end ) = element = 1, 2, 3
            // (0 - 3)
                //( 0 te start 3 tei end ) = element = 1, 2, 3, 4
            // (0 - 4)
                //( 0 te start 4 tei end ) = element = 1, 2, 3, 4, 5

        // 2. --> Start - 1
            // (1 - 1)
                //( 1 te start 1 tei end ) = single element = 2
            // (1 - 2)
                //( 1 te start 2 tei end ) = element = 2, 3
            // (1 - 3)
                //( 1 te start 1 tei end ) = element = 2, 3, 4
            // (1 - 4)
                //( 1 te start 4 tei end ) = element = 2, 3, 4l, 5
            

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int  n = 5;
    int array[5] = {1, 2, 3, 4, 5};

    for ( int start = 0; start < n; start++ ) {
        for ( int end = start; end < n; end ++ ) {
            for ( int i = start; i<= end; i++) {
                cout << array[i] ;
            }
            cout << " ";  
        }
        cout << endl;
    }

    return 0;
}
