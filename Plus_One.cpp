class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() -1;
        for(int i = n; i>= 0; i--) {
            if(digits[i] == 9) {
                digits[i] =0;
            }
            else{
                digits[i] += 1;
                return digits;
            }
        }
        // edge case when all number are 9.
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};