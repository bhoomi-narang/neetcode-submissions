class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxDiff = 0;

        for(int i = 1; i<prices.size(); i++){
            if(prices[i]<min){
                min= prices[i];
            }
            int diff = prices[i]- min;
            if(diff > maxDiff){
                maxDiff = diff;
            }
        }
        return maxDiff;
    }
};
