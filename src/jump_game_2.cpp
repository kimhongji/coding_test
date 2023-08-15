class Solution {
public:
    int jump(vector<int>& nums) {
        // dp (solution..)
        int cnt = 0;
        int end = 0; 
        int dist = 0;

        for (int i = 0; i< nums.size()-1; i++){
            dist = max(dist, i + nums[i]);
            if (i == end) {
                end = dist;
                cnt ++;
            }
        }

        return cnt;

    }
};

//https://leetcode.com/problems/jump-game-ii
