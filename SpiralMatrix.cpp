vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    int n = MATRIX.size(); //rows
    int m = MATRIX[0].size(); // column
    int left =0 ,right = m-1, top =0, bottom = n-1;
    vector<int> ans;
    while(top <= bottom && left <= right) {
        
        // right move
        for(int i = left; i<= right; i++) {
            ans.push_back(MATRIX[top][i]);
        }
        top++;

        //bottom
             for(int i = top; i<= bottom; i++) {
            ans.push_back(MATRIX[i][right]);
        }
       right--;
       if(top <= bottom) {
                for(int i = right; i>=left; i--) {
            ans.push_back(MATRIX[bottom][i]);
        }
 bottom--;
       }
             if(left <= right) {
                for(int i = bottom; i>=top; i--) {
            ans.push_back(MATRIX[i][left]);
        }
left++;
       }
    }
return ans;
}