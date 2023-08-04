#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i< nums.size(); i++){
            m[nums[i]]++;
        }

        int major = 0;
        int key = 0;
        for (auto iter = m.begin(); iter != m.end(); ++iter) {
           if (major < iter->second) {
               major = iter->second;
               key = iter->first;
           }
        }

        return key;
    }
};

//https://leetcode.com/problems/majority-element
