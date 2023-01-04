/*https://practice.geeksforgeeks.org/problems/bubble-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article*/

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        for(int i=1;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
};
