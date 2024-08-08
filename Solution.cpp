class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size()-1;
        int temp = arr[n];
        for(int j=n;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
};
