class Solution {
  public:
    int setKthBit(int n, int k) {
        
        int ans = 1 << k;
        
        return ans | n;
        
    }
};
