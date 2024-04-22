int upperbound(vector<int> &arr , int x , int n) {
    int low = 0 , high  = n-1;
    int ans = n;
    while( low <= high) {
        int mid = (low +high) /2;
        if(arr[mid] > x) {
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid +1;
        }
    }
    return ans;
}

int findSmallValue(vector<int> &matrix , int n, int m , int x){
   int  cnt = 0;
    for(int i = 0; i<n; i++) {
        cnt += upperbound(matrix[i] , x ,n);
    }
    return  cnt;
}
int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    int low = INT_MAX , high = INT_MIN;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i <n; i++) {
        low = min(low, matrix[i][0]);
        high = max(high , matrix[i][m-1]);
    }
    int required = (n*m)/2;
    while(low <= high) {
        int mid = (low + high) /2;
        int smallValue = findSmallValue (matrix , n , m ,mid); // return no if elemrnt >= mid
        if(smallValue <= required) {
            low = mid +1;
        }
        else {
            high = mid +1;
        }
    }
    return low;
}