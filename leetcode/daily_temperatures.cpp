class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> res(n,0);
        stack<pair<int,int>> aux;
        aux.push(pair<int,int>(T[n-1],n-1));
        res[n-1]=0;
        for(int i=n-2;i>=0;i--) {
            while(aux.size()>0 && aux.top().first<=T[i]) {
                aux.pop();
            }
            if(aux.size()==0)
                res[i]=0;
            else
                res[i]=aux.top().second - i;
            aux.push(pair<int,int>(T[i],i));
        }
        return res;
    }
};