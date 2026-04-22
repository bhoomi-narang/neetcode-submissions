class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for(const auto& s:st){
            if(!st.count(s-1)){
                int currentNum = s;
                int length = 1;
                while(st.count(currentNum + 1)){
                    currentNum++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
