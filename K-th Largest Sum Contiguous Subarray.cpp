/*https://practice.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1*/


class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        priority_queue<int,vector<int>,greater<int>>mini;
        for(int i=0;i<N;i++){
            int sum=0;
            for(int j=i;j<N;j++){
                sum=sum+Arr[j];
                mini.push(sum);
                if(mini.size()>K){
                    mini.pop();
                }
            }
        }
        return mini.top();
    }
};
