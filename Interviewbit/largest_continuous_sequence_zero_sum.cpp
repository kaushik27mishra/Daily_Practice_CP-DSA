vector<int> Solution::lszero(vector<int> &a) {
    unordered_map<long long,int>m;
    long long s = 0;
    int ans=0,ind,ind1;
    int n=a.size();
    m[0] = 0;
    for(int i=1;i<=n;i++) {
        s += a[i-1];
        if(m.find(s)==m.end()) m[s] = i;
        else{
            if(ans < i-m[s]) {
                ans = i-m[s];
                ind = m[s]+1;
                ind1 = i;
            }
        }
    }
    vector<int>an;
    if(ans==0) return an;
    for(int i=ind;i<=ind1;i++) an.push_back(a[i-1]);
    return an;
}
