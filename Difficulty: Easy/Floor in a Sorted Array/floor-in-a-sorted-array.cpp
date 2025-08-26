class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int res=-1;
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                res= mid;
                low=mid+1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else{
                res=mid;
                low=mid+1;
            }
        }
        return res;
    }
};
