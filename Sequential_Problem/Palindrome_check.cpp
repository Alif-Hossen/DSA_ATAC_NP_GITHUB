// SOLUTION USING BUILD IN FUNCTION -->     

            #include <iostream>
            #include <string>
            #include <algorithm>

            using namespace std;

            bool isPalindrome ( string  original ) {
                string reverse_str = original;

                reverse( reverse_str.begin(), reverse_str.end() );

                if ( original == reverse_str ) {
                    return true;
                } else {
                    return false;
                }
            }

            int main() {

                string input;
                cout << "Enter A Word / Number : ";
                cin >> input;

                if( isPalindrome ( input ) ) {
                    cout << " The Giver Word Is A Palindrome.!";
                } else {
                    cout << " The Giver Number Is Not A Palindrome.!";
                }

                return 0;
            }



// STANDARD SOLUTION ---> 


            #include <iostream>
            #include <string>

            using namespace std;

            bool isPalindromeRecursive ( string s, int start, int end ) {
                if ( start >= end ) {
                    return true;
                }

                if( s[start] != s[end ] ) {
                    return false;
                }

                return isPalindromeRecursive ( s, start + 1, end - 1 );
            }


            int main() {

                string str;
                cout << "Enter A String / Number : ";
                cin >> str;

                if ( isPalindromeRecursive ( str, 0, str.length()-1 ) ) {
                    cout << "Palindrome.!" << endl;
                } else {
                    cout << "Not Palindrome.!" << endl;
                }

                return 0;
            }