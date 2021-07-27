//recursive solution
class Solution{
public:
	int uniquePaths(int m, int n) {
		int res=0;
		paths(m, n, &res);
		return res;
	}

	void paths(int m, int n, int *res){
		//base cases	
		if(m<1 || n<1){
			return;
		}
		if(m==1 && n==1){
			*res = *res+1;
		}
		//recursion
		paths(m-1, n, res);
		paths(m, n-1, res);
	}
};

//DP solution using top-down-approach
class Solution{
public:
	int uniquePaths(int m, int n){
		int **dp;
		dp = new int*[m];
		for(int i=0; i<m; i++){
			dp[i] = new int[n];
		}

		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				dp[i][j] = -1;
			}
		}
		dp[0][0]=1;
		return paths(m, n, dp);
	}
	int paths(int m, int n, int **dp){
		//base case
		if(m<1 || n<1){
			return 0;
		}

		//lookup
		if(dp[m-1][n-1] > 0){
			return dp[m-1][n-1];
		}

		//recursion
		dp[m-1][n-1] = paths(m-1, n, dp)+paths(m, n-1, dp);
		return dp[m-1][n-1];

	}
}
