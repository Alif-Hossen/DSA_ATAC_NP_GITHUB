#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = { 1, 2, 4, 6, 8 };
    int size = v.size();

    for( int i= 0; i< size; i++ ) {
        for ( int j= i+1; j< size; j++ ) {
            cout << "(" << v[i] << ", " << v[j] << ")" ;
            //or
            // cout << v[i] << v[j] << " ";
        }
        cout << endl;
    }

    return 0;
}