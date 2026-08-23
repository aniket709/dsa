class Solution {
public:

 void solve ( vector<int>& candidates,vector<int> output ,vector<vector<int>>&ans ,int target,int start){

        if (target==0) {

            ans.push_back(output);

         return ;
     }

      for (int i=start;i<candidates.size();i++){

        int newtarget = target-candidates[i];

        if (newtarget>=0){

            output.push_back(candidates[i]);

            solve (candidates,output,ans,newtarget,i);

            output.pop_back();
        }

      }
 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         
        //  vector<set<int>>st;
         vector<vector<int>> ans;
         vector<int> output;

        solve (candidates,output,ans,target,0);

       
        return ans;
        
    }
};