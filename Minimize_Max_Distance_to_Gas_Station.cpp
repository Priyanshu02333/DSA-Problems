#include<bits/stdc++.h>
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.	
	int n = arr.size();
	vector<int> howmany( n-1 , 0);
	priority_queue<pair < long double , int >> pq;
        for (int i = 0; i < n - 1; i++) {
                pq.push( { arr[ i+1] - arr[i] , i });
        }
		for (int  gasStation = 1; gasStation <= k; gasStation++  ) {
			auto tp = pq.top(); pq.pop();
			int SecInd = tp.second;
			howmany[SecInd]++;
			long double iniDiff =  arr[SecInd +1] - arr[SecInd];
			double newSecLen = iniDiff / ( long double) ( howmany[SecInd] + 1);
                        pq.push({newSecLen, SecInd});
                }
		return pq.top().first;
}
