class Solution {
public:
    void nextPermutation(vector<int>& nums) {

       int j = nums.size() - 1;
    int n = nums.size();
    int breaking_index = -1;

    // Find breaking index
    while (j > 0) {

        if (nums[j] > nums[j - 1]) {

            breaking_index = j - 1;

            break;
        }

        j--;
    }

    // No breaking index
    if (breaking_index == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // Find element greater than breaking element
    j = nums.size() - 1;

    while (j >= breaking_index) {

        if (nums[j] > nums[breaking_index]) {

            swap(nums[j], nums[breaking_index]);

            break;
        }

        j--;
    }
    reverse(nums.begin() + breaking_index + 1, nums.end());
}

    
};