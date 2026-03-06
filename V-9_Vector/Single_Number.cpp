
#include <iostream>
#include <vector>
using namespace std;

int singleNumber( vector<int>& nums ) {
    int sum = 0;
    for ( int value : nums ) {
        sum ^= value;
    }
    return sum;
}

int main() {

    vector<int> vecb = {4, 1, 2, 1, 2};
    cout << "The Single Number Is : " << singleNumber( vecb) << endl ;
    
    return 0;
}
