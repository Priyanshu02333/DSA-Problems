class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    //Kmp Alogrithm
	    vector<int> lpf(s.size() , 0);
	    int pre = 0 , suf = 1;
	    while(suf < s.size()) {
	        if(s[pre] == s[suf] ) {
	            lpf[suf] = pre + 1;
	            pre++;
	            suf++;
	        }
	        else 
	        {
	        if ( pre == 0) {
	            lpf[suf] =0;
	            suf++;
	        }
	        else {
	            pre = lpf[pre -1];
	        }
	    }
	  }
	    return lpf[s.size() -1];
	}
	
};