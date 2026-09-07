class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        
       vector<int> ans;
       
       int i,j=0;
       int n= a.size(),m=b.size();
       int next=0;
       
       while ( i < n && j < m){
           
           if (a[i] > b[j]){
               
               ans.push_back(b[j]);
               j++;
           }
           
           else{
               
               ans.push_back(a[i]);
               i++;
           }
           
         next++;
           
       }
       
       while (i < n){
            ans.push_back(a[i]);
               i++;
           
       }
       
       while (j < m){
            ans.push_back(b[j]);
               j++;
           
       }
       
      if (k > 0 && k <= ans.size()) {
              return ans[k - 1];
          }
       
       return -1;
       
       
      
        
    }
};