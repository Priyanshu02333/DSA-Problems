class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int len = 0;
        int i = n-1;
        // trim down if space is present 
        while(i>= 0 && s[i]== ' ') {
            i--;
        }
        // counting the lenth of string 
        while( i>= 0 && s[i] != ' ' ) {
            len++;
            i--;
        }
        return len;
    }
};