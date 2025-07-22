class Solution {
  public:
  
    bool subArrayExists(vector<int>& arr) {
        unordered_map<int, int> sumCount;
        int sum = 0;
        sumCount[0] = 1;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sumCount.find(sum) != sumCount.end()) {
                return true;  
            }
            sumCount[sum]++;
        }

        return false;  
    }
};