class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        vector<vector<int>> num;
      
      int n= arr.size();
      int sum=0;
        for (int i=0;i<n;i++){
            for (int j=i;j<n;j++){

             int window = j-i+1;
                if (window % 2 !=0){

                for (int k=i;k <=j;k++){
                    sum+=arr[k];
                }

                }


            }
        }
        return sum;
    }
};