/*https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article*/

class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        while(l<=h){
             int mid=l+(h-l)/2;
            if(A[mid]==key){
                return mid;
            }
            if(A[l]<=A[mid]){
                if(key<=A[mid] && key>=A[l]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        else{
            if(key>=A[mid] && key<=A[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        }
        return -1;
    }
};
