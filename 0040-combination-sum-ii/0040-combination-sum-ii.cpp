class Solution {
public:

 void solve ( vector<int>& candidates,vector<int> output ,set<vector<int>>& st ,int target,int start){

        if (target==0) {

           st.insert(output);

         return ;
     }

      for (int i=start;i<candidates.size();i++){

        int newtarget = target-candidates[i];

        if (newtarget>=0){

            if (i > start && candidates[i] == candidates[i - 1])
            continue;

        if (candidates[i] > target)
            break;

            output.push_back(candidates[i]);

            solve (candidates,output,st,newtarget,i+1);

            output.pop_back();
        }

      }
 }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         
        
         vector<vector<int>> ans;
         vector<int> output;
         set<vector<int>> st;

   sort(candidates.begin(), candidates.end());
        solve (candidates,output,st,target,0);
           
        for (auto it : st){
            ans.push_back(it);
        }
       
        return ans;
        
    }
};