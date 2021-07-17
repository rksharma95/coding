/*
time complexity: O(n)
*/
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int profit = INT_MIN;
    int max = prices[n-1];
    for(int i=n-2; i>=0; i--){
        if(max-prices[i] > profit){
            profit = max-prices[i];
        }
        if(max < prices[i]){
            max = prices[i];
        }
    }
    
    if(profit<0) return 0;
    return profit;
    
}