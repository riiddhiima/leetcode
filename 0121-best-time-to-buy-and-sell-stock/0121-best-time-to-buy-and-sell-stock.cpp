class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpro = INT_MAX;
        int maxpro = INT_MIN;
        for(int i =0;i<prices.size();i++){
            minpro= min(prices[i],minpro);
            maxpro = max(prices[i]-minpro,maxpro);
        }
        return maxpro;
    }
};