#include<iostream>
#include<vector>
using namespace std;


void sortColors( vector<int>& nums, int size) {
    int low = 0, mid = 0, high = size - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {

    vector<int> nums = { 2,0,2,1,1,0 };
    int size = nums.size();
    
    sortColors(nums, size);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}