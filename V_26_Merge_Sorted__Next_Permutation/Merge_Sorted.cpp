#include<iostream>
#include<vector>
using namespace std;

void mergeSorted(vector<int>& A, vector<int>& B, int m, int n) {
    int index=m+n-1, i=m-1, j=n-1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[index--] = A[i--];
        } else {
            A[index--] = B[j--];
        }
    }
    while(j >= 0) {
        A[index--] = B[j--];
    }
}

int main() {

    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 5, 6};

    int m = 3;
    int n= 3;

    mergeSorted( A, B, m, n );

    for(int x : A) {
        cout<< x << " ";
    }


    return 0;
}
