class Solution {
  public:
  
   void solve (int index,vector<int>& arr,
vector<int> &ans,int sum){
    
       
       if (index==arr.size()){
           
           ans.push_back(sum);
           return;
       }
       
   sum+=arr[index];

       solve (index+1,arr,ans,sum);
       
      sum-=arr[index];
       
       solve (index+1,arr,ans,sum);
       
   }
      
    vector<int> subsetSums(vector<int>& arr) {
        
         vector<int> ans;
         
         solve (0,arr,ans,0);
         
         return ans;
        
        
       
       
        
    }
};