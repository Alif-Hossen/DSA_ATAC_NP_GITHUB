#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<char> vec = { 'M','D',':',' ','N','A','I','M','U','R','-','R','A','H','M','A','N','-','A','L','I','F' };

    for(char i : vec) {
        cout << i ;
    }

    return 0;
}
