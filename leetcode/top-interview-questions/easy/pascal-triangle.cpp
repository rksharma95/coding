/*
time complexity: O(n^2)
*/
vector<vector<int>> generate(int numRows) {
    vector<vector<int> > res;
    int n = numRows;
    for(int i=0; i<n; i++){
        vector<int> c;
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                c.push_back(1);
                continue;
            }
            int x = res[i-1][j-1];
            int y = res[i-1][j];
            x += y;
            c.push_back(x);
        }
        res.push_back(c);
    }
    
    return res;
}