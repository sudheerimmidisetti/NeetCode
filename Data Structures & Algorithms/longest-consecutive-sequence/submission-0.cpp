class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());

        int maxCnt = 0;
        for (int x : nums) {
            int cnt = 0, val = x;
            while (st.find(val) != st.end()) {
                cnt++;
                val++;
            }
            maxCnt = max(maxCnt, cnt);
        }
        
        return maxCnt;
    }
};
