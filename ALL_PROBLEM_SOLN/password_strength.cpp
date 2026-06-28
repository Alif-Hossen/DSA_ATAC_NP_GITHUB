class Solution {
public:
    int passwordStrength(string password) {

        int result = 0;

        // VIS[256] = ASCII TE TOTAL 256 TA POSSIBLE CHRACTER DHORA HOICHE.
        
        bool vis[256] = {false}; // KONO CHARACTER AGE ASHCHE KINA TRACK KORBE

        for(int i=0; i<password.size(); i++) {
            char ch = password[i];

            if( !vis[ch] ) { // CHECK - CHARACTER TA AGE USE HOICHE KINA, JODI NA HOY ->

                vis[ch] = true;

                if(ch >= 'a' && ch <= 'z') {
                    result += 1;
                } else if(ch >= 'A' && ch <= 'Z') {
                    result += 2;
                } else if(ch >= '0' && ch <= '9') {
                    result += 3;
                } else {
                    result += 5;
                }
            }
        }
        return result;
    }
};