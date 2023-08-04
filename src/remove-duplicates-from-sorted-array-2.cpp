#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        map<int, int> m;
        for (int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        for (auto iter = m.begin(); iter != m.end(); ++iter) {
            if (iter->second > 1) {
                temp.push_back(iter->first);
                temp.push_back(iter->first);
            }else if (iter->second == 1){
                temp.push_back(iter->first);
            }
        }

        for (int i = 0; i<temp.size(); i++){
            nums[i] = temp[i];
        }

        return temp.size();
    }
};

//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii
