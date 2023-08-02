#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        nums.push_back(10000);
        for (int i = 1; i<nums.size(); i++){
            if (nums[i] != nums[i-1]) {
                temp.push_back(nums[i-1]);
            }
        }

        for (int i = 0; i<temp.size(); i++){
            nums[i] = temp[i];
        }

        return temp.size();
    }
};

//https://leetcode.com/problems/remove-duplicates-from-sorted-array
