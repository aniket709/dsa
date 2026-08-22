class Solution {
  public:
  void solve (vector<int>& arr,int n,int i,int &sum){
       
    //   int sum=0;
       
    //   if (n==0) return 0;
       
       if (i==n) return ;
       
       sum+=arr[i];
       
       solve (arr,n,i+1,sum);
     
       
       
       
   }
    int arraySum(vector<int>& arr) {
        
        int n= arr.size();
        int sum =0;
        
       solve (arr,n,0,sum);
       
       return sum;
       
       
        
    }
};