int Solution::solve(vector<int> &A, int B) {
    int count=0;
    int xorArr[A.size()];
    int ans=0;
    unordered_map<int, int> mp; 
    xorArr[0]=A[0];
    for(int i=1;i<A.size();i++) {
        xorArr[i]=xorArr[i-1]^A[i];
    }
    
    for(int i=0;i<A.size();i++) {
        int tmp=B^xorArr[i];
        
        ans+=mp[tmp];
        
        if (xorArr[i] == B) 
            ans++; 
            
        mp[xorArr[i]]++; 
    }
    return ans;
}
