class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n=S.size();
        vector<int> res(n);
        if(S.size()==0)
            return res;
        int prev=INT_MIN/2;
        for(int i=0;i<n;i++) {
            if(S[i]==C) {
                prev=i;
            }
            res[i]=i-prev;
        }
        prev=INT_MAX;
        for(int i=n-1;i>-1;i--) {
            if(S[i]==C)
                prev=i;
            res[i]=min(res[i],prev-i);
        }
        return res;
    }
};