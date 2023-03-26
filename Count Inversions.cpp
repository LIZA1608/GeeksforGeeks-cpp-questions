/*https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article*/
class Solution{
  public:
    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        return mergeSort(arr,temp,0,N-1);
    }
    long long  mergeSort(long long arr[],long long temp[],long long left,long long right){
        long long mid=0;
        long long inversion=0;
        if(right>left){
            mid=left+(right-left)/2;
            inversion+=mergeSort(arr,temp,left,mid);
            inversion+=mergeSort(arr,temp,mid+1,right);
            inversion+=merge(arr,temp,left,mid+1,right);
        }
        return inversion;
    }
    long long merge(long long arr[],long long temp[],long long left,long long mid,long long right){
        long long i,j,k;
        long long inversion=0;
        i=left;
        j=mid;
        k=left;
        while((i<=mid-1) &&(j<=right)){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                temp[k++]=arr[j++];
                inversion+=(mid-i);
            }
        }
        while(i<=mid-1){
            temp[k++]=arr[i++];
        }
        while(j<=right){
            temp[k++]=arr[j++];
        }
        for(i=left;i<=right;i++){
            arr[i]=temp[i];
        }
        return inversion;
    }

};
