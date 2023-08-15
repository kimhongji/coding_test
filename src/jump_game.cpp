class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        bool ret = false;
        int cnt = nums[0];
        
        for (int i = 1; i< nums.size(); i++) {
            if (cnt <= 0) {
                return false;
            }

            cnt -= 1;
            
            if (cnt < nums[i]) {
                cnt = nums[i];
            }
        }

        return true;
    }
};

//https://leetcode.com/problems/jump-game
