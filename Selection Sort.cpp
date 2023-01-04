/*https://practice.geeksforgeeks.org/problems/selection-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article*/

class Solution
{
    public:
 
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<n-1;i++){
           int minIndex=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[minIndex]){
                   minIndex=j;
               }
           }
           swap(arr[minIndex],arr[i]);
       }
    }
};
