class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int max_diff=INT_MIN;
        int res=0;
        for(int i=0;i<prices.size();i++) {
            if(mini>prices[i]) {
                res=0;
                mini=prices[i];
            }
            max_diff=max(max_diff,prices[i]-mini);
            res=max(res,max_diff);
        }
        return res;
    }
};