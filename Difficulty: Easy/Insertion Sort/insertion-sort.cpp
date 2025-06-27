class Solution {
  public:
    // Please change the array in-place
   void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > key) {
                arr[j + 1] = arr[j];  
            } else {
                break;
            }
        }

        arr[j + 1] = key;
    }
}
};