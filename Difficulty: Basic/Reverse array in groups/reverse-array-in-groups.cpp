class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n=arr.size();
        int low=0;
        while(low<n){
            int high=min(low+k-1,n-1);
            int a=low;
            int b=high;
            while(a<b){
                swap(arr[a],arr[b]);
                a++;
                b--;
            }
            low=low+k;
        }
    }
};
