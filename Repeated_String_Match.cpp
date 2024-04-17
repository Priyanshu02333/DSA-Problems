class Solution {
public:
    void lpsfind( vector<int> &lps , string s) {
        int pre = 0, suff=1;
        while( suff < s.size()) {
            if( s[pre] == s[suff]) {
                lps[suff] = pre +1;
                pre++ , suff++;
            }
            else {
                if( pre == 0) {
                    lps[suff] =0;
                    suff++;
                }
                else {
                    pre = lps[pre-1];
                }
            }
        }
    }

    int kmp_find( string haystack , string needle) {
        vector<int> lps(needle.size() ,0);
        lpsfind(lps , needle);
        int first = 0 , second = 0;
        while( first < haystack.size() && second < needle.size()) {
            if(haystack[first] == needle[second]) {
                first++ , second++;
            }
            else {
                if(second == 0) {
                    first++;
                }
                else {
                    second = lps[second -1];
                }
            }
        }
        if(second == needle.size())
        return 1;

        return 0;
    }

    int repeatedStringMatch(string a, string b) {
        // base condition
        if( a == b) 
        return 1;
        int repeat = 1;
        string temp = a;

        while (temp.size() < b.size()) {
            temp += a;
            repeat++;
        }
        // Kmp Algorithm for string matching 
        if(kmp_find(temp , b)){
            return repeat;
        }
        if(kmp_find(temp+a , b)){
            return repeat+1;
        }
return -1;
    }
};