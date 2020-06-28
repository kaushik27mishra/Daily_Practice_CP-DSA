vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res(A);
    for(int i=0;i<A;i++) {
        for(int j=0;j<=i;j++) {
            if(i>=1 && j>=1 && j<res[i-1].size()) {
                res[i].push_back(res[i-1][j-1]+res[i-1][j]);    
            }
            else {
                res[i].push_back(1);
            }
        }
        
    }
    return res;
}
