class Solution {
public:
    int hIndex(vector<int>& citations) {
        

        int min = 0;
        int h = 0;
        while(true) {
            int cnt = 0;
            int max = citations.size();
            for (int i = 0; i<citations.size(); i++) {
                if (min <= citations[i]) {
                    cnt ++;
                }
            }
            
            if (min > cnt) {
                break;
            }
            h = min;
            min ++;
        }

        return h;
    }
};

// [3,0,6,1,5]
// 3

//https://leetcode.com/problems/h-index

