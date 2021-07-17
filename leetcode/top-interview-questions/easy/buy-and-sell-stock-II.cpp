/*
time complexity: O(n)
*/
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int max_profit = 0;
    for(int i=1; i<n;i++){
        if(prices[i]>prices[i-1]){
            max_profit+= prices[i]-prices[i-1];
        }
    }
    return max_profit;
}