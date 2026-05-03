class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0;
        int maxDiff = 0;
        for(int r = 1; r < prices.size(); r++){
            if(prices[r]<prices[l]){
                l = r;
            }
            maxDiff = max(maxDiff, prices[r]-prices[l]);
        }
        return maxDiff;
    }
};
