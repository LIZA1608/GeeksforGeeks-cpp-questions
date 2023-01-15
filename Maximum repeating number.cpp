/*https://practice.geeksforgeeks.org/problems/maximum-repeating-number4858/1*/

class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    int ans=INT_MAX;
	    int repeat=0;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    for(auto it:mp){
	        if(it.second==repeat){
	            ans=min(ans,it.first);
	        }
	        else if(repeat<it.second){
	            repeat=it.second;
	            ans=it.first;
	        }
	    }
	    return ans;
	}

};
