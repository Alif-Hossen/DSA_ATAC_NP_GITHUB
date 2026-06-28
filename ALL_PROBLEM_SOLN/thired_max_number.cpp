class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> mySet;

        for( int var : nums ) {
            mySet.insert(var);
        }

        if( mySet.size() >= 3 ) {
            auto it = mySet.end();
            advance(it, -3);
            return  *it;
        }  else{
            return *mySet.rbegin();
        }
        
    }
};