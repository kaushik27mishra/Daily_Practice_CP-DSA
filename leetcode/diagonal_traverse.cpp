class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        vector<int> res;
        if(m==0)
            return res;
        int n = matrix[0].size();

        for(int k=0;k<n+m-1;k++) {
            if(k&1) {
                for(int i=0;i<m;i++) {
                    if(i<=k && (k-i)<n)
                        res.push_back(matrix[i][k-i]);
                }
            }
            else {
                for(int i=m-1;i>=0;i--) {
                    if(i<=k && (k-i)<n)
                        res.push_back(matrix[i][k-i]);
                }
            }
        }
        return res;
    }
};