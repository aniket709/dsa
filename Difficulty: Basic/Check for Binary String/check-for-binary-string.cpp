class Solution {
  public:
    bool isBinary(string& s) {
        
        for (auto it : s){
            
            if (it !='1' && it !='0') return false;
        }
        
        return true;
        
    }
};