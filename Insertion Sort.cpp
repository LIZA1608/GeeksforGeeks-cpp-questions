/*https://practice.geeksforgeeks.org/problems/insertion-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article*/

class Solution
{
    
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++){
            int temp=arr[i];
            int j=i-1;
            while(j>=0){
                if(arr[j]>temp){
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
                j--;
            }
            arr[j+1]=temp;
        }
    }
};
