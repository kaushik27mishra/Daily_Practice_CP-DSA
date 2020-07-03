vector<int> Solution::getRow(int A) {
    vector<vector<int>> pascal(A+1);
    for(int i=0;i<=A;i++) {
        for(int j=0;j<=i;j++) {
            if(i>=1 && j>=1 && j<pascal[i-1].size()) {
                pascal[i].push_back(pascal[i-1][j]+pascal[i-1][j-1]);
            }
            else {
                pascal[i].push_back(1);
            }
        }
    }
    
    return pascal[A];
}
