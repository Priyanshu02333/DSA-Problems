# include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.    
        int low = 0 , high =arr.size()-1 , ans = INT_MAX, index = -1;
        while (low <= high) {
            int mid = (low +high) /2;
            if(arr[low] <= arr[high]) {
                if(arr[low] < ans) {
                    index = low;
                    ans = arr[low];
                }
                break;
            }

            if (arr[low] <= arr[mid]) {
                if(arr[low] < ans) {
                    index =low;
                    ans = arr[low];
                }
                low = mid+1;
            }
            else {
                high = mid -1;
                if(arr[mid] < ans) {
                    index = mid;
                    ans =arr[mid];
                }
            }
        }
        return index;
}