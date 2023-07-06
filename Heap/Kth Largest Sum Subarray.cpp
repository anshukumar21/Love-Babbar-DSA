// **Approach** 1: Brute Force

#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	int n = arr.size();

	vector<int> ans;

	for(int i=0 ;i<n ;i++){
		int sum = 0;
		for(int j=i ;j<n ;j++){
			sum += arr[j];
			ans.push_back(sum);
		}
	}

	sort(ans.begin(), ans.end());

	return ans[ans.size()-k];
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Approach 2: Optimised Code space wise 

#include<queue>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	priority_queue<int, vector<int> , greater<int> > mini;
	
	int n = arr.size();
	
	for(int i=0 ;i<n ;i++){
		int sum=0;
		for(int j=i ; j<n ;j++){

			sum += arr[j];
			
			if(mini.size() < k)
				mini.push(sum);
			else
				if(sum > mini.top()){
					mini.pop();
					mini.push(sum);
				}
		}
	}
	
	return mini.top();
}
