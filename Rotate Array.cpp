/*https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1*/

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        int res[n];
        for(int i=0;i<n;i++){
            res[i]=arr[(i+d)%n];
        }
        for(int i=0;i<n;i++){
            arr[i]=res[i];
        }
    }
};
