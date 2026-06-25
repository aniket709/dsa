class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int>mp;

         if (s.length()==0) return 0;
         
         int i=0,j=0;
         int maxi =-9;

         while (j < s.length()){

            mp[s[j]]++;

             
             while (mp[s[j]] > 1){

                mp[s[i]]--;
                i++;
             }

                    maxi = max (maxi,j-i+1);

           j++; 
         }
        return maxi;
    }
};