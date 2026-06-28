class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = ""; // MAIN RESULT

        reverse(s.begin(), s.end());  // REVERSE MAIN PHARSE ( TO YO -> OY OT )

        for(int i = 0; i < n; i++) {  // PROTITA WORD KE REVERSE KORBO
            string word = "";         
            while( i<n && s[i] != ' ' ) {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if( word.length() > 0 ) {
                ans += " " + word;
            }
        }
        return ans.substr(1);  // STRING ER 1 INDEX (' ') KE REKHE BAKIGULA PRINT KORBE
        
    }
};