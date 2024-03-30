#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    //better solution
    map< long long , int> mpp;
    long long sum = 0;
    int maxlen =0;
    for(int i =0; i<nums.size(); i++) {
        sum += nums[i];
        if(sum == k) {
            maxlen = max(maxlen , i+1);
        }
        long long rem = sum-k;
        if(mpp.find(rem) != mpp.end()) {
            int len = i - mpp[rem];
            maxlen = max(maxlen ,len);
        }
        if(mpp.find(sum) == mpp.end()) {
            mpp[sum] = i;
        }
    }
    return maxlen;
}