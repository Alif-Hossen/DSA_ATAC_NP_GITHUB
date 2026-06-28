#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector<char> vec = { 'M','D',':',' ','N','A','I','M','U','R','-','R','A','H','M','A','N','-','A','L','I','F' };

    // for(char i : vec) {
    //     cout << i ;
    // }




    // vector<int> number = { 1,2,3,4,5,6,7,8};
    // int sum = 0;
    // for ( int i : number ) {
    //     if( i % 2 == 0 ) {
    //         sum += i;
    //     }
        
    // }
    // cout << "The Sum Is : " << sum << endl;


    vector<int> vecb;

    cout << "Before PushBack Size Is : " << vecb.size() << endl;
    vecb.push_back(25);
    vecb.push_back(35);
    vecb.push_back(45);
    cout << "After PushBack Size Is : "  << vecb.size() << endl ;

    vecb.pop_back(); // 45

    cout << "After PopBack The Size Is : " << vecb.size() << endl;

    // for( int i : vecb ) {
    //     cout << i << endl;
    // }

    cout <<"The Front Number Is : " << vecb.front() << endl;
    cout <<"The Back Number Is : " << vecb.back() << endl;

    cout << vecb.at(0) << endl;

    return 0;
}



