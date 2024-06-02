class Solution {
public:
    int arrangeCoins(int n);
};
/**********************************************************************/
int Solution::arrangeCoins(int n) {
    int nRows{1}, lastRight;
    long int sum{};
    while (sum <= n) {
       sum = ((long int)nRows*(nRows+1))/2;
       if (sum <= n) {
           lastRight = nRows;
       }
       ++nRows; 
    }
    return lastRight;
}
/**********************************************************************/