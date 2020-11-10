class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++) {
            reverse(A[i].begin(),A[i].end());
        }
        
        for(int i=0;i<A.size();i++) {
            for(int j=0;j<A[i].size();j++) {
                A[i][j]=1-A[i][j];
            }
        }
        return A;
    }
};