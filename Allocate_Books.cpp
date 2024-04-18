#include<bits/stdc++.h>
int countStudent (vector<int> &arr , int mid) {
    int student = 1;
    long long  pagestudent = 0;
    for(int i =0; i<arr.size(); i++ ) {
        if( pagestudent + arr[i] <= mid ) {
          pagestudent += arr[i];
        }
        else {
            student += 1;
            pagestudent = arr[i];
        }
    }
    return  student;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    // Binary Search
    if( m >n) return -1;
    int low = *max_element(arr.begin() , arr.end());
    int high = accumulate(arr.begin() , arr.end() , 0);
    while( low <= high) {
        int mid = (low+ high) /2;
        int noStudent = countStudent( arr , mid );
        if (noStudent > m) {
            low = mid + 1;
        } else{
            high = mid -1;
        }
    }
    return low;
}