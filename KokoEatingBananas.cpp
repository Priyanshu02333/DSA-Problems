#include <bits/stdc++.h>
int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    for(int i= 0; i<v.size(); i++) {
        maxi = max(maxi ,v[i]);
    }
    return maxi;
}

int CalculateHours(vector<int> &v, int hourly) {
    int totalhour = 0;
    for(int i = 0; i< v.size(); i++){
        totalhour += ceil ( (double)v[i] / (double)hourly );
    }
    return totalhour;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int low = 1 , high = findMax(v) , ans =INT_MIN;
    while(low <= high) {
        int mid = (low + high ) /2;
        int totalHours = CalculateHours(v , mid);
        if(totalHours <= h) {
 
        high = mid -1;
        }
        else {
            low = mid +1;
        }
    }
    return low;
}