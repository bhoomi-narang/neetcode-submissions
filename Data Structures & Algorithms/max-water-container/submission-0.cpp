class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int res = 0;
        while(i<j){
            int mul = min(heights[j], heights[i]) * (j-i);
            if(mul>res){
                res = mul;
            }
            if(heights[i]<=heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};
