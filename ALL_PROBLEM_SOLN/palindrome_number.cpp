class Solution {
public:

    // SECOND FUNCTION ->
    int reverse(int n) {
        int reverseNumber = 0;

        while( n != 0 ) {
            int digit = n % 10;
            
            if(reverseNumber > INT_MAX/10 || reverseNumber < INT_MIN/10) {
                return 0;
            }

            reverseNumber = reverseNumber * 10 + digit;
            n = n / 10;
        }
        return reverseNumber;
    }
    // FIRST FUNCTION ->
    bool isPalindrome(int n) {
        if(n < 0) return false;

        int reverseNum = reverse(n);
        return n == reverseNum;
    }
};