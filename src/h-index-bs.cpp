class Solution {
public:
    int hIndex(vector<int>& citations) {
        // binarity search 
        int low = 0;
        int high = citations.size();
        while(low < high){
            int mid = (low+high+1)/2;
            int cnt=0;
            for(int i=0 ; i<citations.size() ; i++) {
                if(citations[i] >= mid) cnt++;
            }
            if(cnt >= mid) low = mid;
            else high = mid-1;
        }
        return low;
    }
};

// [3,0,6,1,5]
// 3

//https://leetcode.com/problems/h-index

