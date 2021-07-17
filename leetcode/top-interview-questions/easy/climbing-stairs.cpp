/*
the solution is simple DP soltion
implementatin follows bottom-up approach

time complexity: O(n)
space complexity: O(n)
*/
int climbStairs(int n) {
    int dp[n+1];
    //base case
    if(n==0 || n==1){
        return 1;
    }
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}