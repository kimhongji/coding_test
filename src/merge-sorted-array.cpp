#include <iostream>
#include <vector>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int j = 0;
        for (int i = 0; i<nums1.size();  i++) {
            if (j >= n) break;
            if (nums1[i] > nums2[j]){
                insertIndex(nums1, i, nums2[j]);
                j++;
            }
        }

        while (j < n) {
            nums1[m+j] = nums2[j];
            j++;
        }
    }
    void insertIndex(vector<int>& nums, int index, int value){
        for(int i = nums.size()-1; i!=index; i--){
            if (i-1 < 0) {
                nums[i] = nums[i];
                break;
            }else {
                nums[i] = nums[i-1];
            }
        }
        nums[index]=value;
    }
};

//https://leetcode.com/problems/merge-sorted-array
