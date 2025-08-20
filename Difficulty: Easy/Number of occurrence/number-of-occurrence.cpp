class Solution {
  public:
  
    int firstOcc(vector<int> arr, int target, int low, int high){
        int res=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                res=mid;
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
    
    int lastOcc(vector<int> arr, int target, int low, int high){
        int res=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                res=mid;
                low=mid+1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
    
    int countFreq(vector<int>& arr, int target) {
        int first=firstOcc(arr,target,0,arr.size()-1);
        if (first == -1) {
            return 0;
        }
        int last = lastOcc(arr, target, 0, arr.size() - 1);
        return last - first + 1;
    }
};
