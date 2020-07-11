int Solution::lengthOfLongestSubstring(string A) {
    map<char,int> hash_map;
    int i=0;
    int j=0;
    int res=0;
    for(i=0;i<A.size();i++) {
        if(hash_map.find(A[i])!=hash_map.end()) {
            while(hash_map[A[i]]>=j) {
                hash_map.erase(A[j]);
                j++;
            }
            hash_map[A[i]]=i;
        }
        else {
            hash_map[A[i]]=i;
        }
        res=max(res,i-j+1);
    }
    return res;
}
