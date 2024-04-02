#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector <int> list;
	map <int ,int > mpp;
	int n = v.size();
	int mini = (int)  {n/3} +1;
	for(int i = 0; i<n; i++) {
		mpp[v[i]]++;
		if(mpp[v[i]] == mini) {
			list.push_back(v[i]);
		}
		if(list.size() == 2) break;
	}
	sort(list.begin(), list.end());
	return list;

}