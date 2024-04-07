bool func (vector<int> arr, int mid , int k, int m){
	int count = 0;
	int noOfBouquet =0;
	for(int i =0; i< arr.size(); i++){
		if(arr[i] <= mid) {
			count++;
		}
		else{
			noOfBouquet += count/k;
			count = 0;
		}
	}
		noOfBouquet += count/k;
		return noOfBouquet >= m;
}
int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	// case 1 when no of elements are not suuficient to  make m bouquets of k ajacent flower
	long long val = m * 1LL * k * 1LL;
	if( arr.size() < val) return -1;
	// minimum  possible day to make m bouqets from k adacent flower
	int low = *min_element(arr.begin(), arr.end());
	int high = *max_element(arr.begin(), arr.end());
	while (low <= high) {
		int mid =(low +high) /2;
		if(func (arr , mid , k , m)) {
			high = mid -1;
		}
		else {
			low = mid+1;
		}
	}
	return low;
}