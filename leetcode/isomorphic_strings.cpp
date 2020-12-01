class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()==0)
            return true;
        int hash_mapS[256] = {0};
        int hash_mapT[256] = {0};
        
        for(int i=0;s[i];i++) {
            if(hash_mapS[s[i]]!=hash_mapT[t[i]])
                return false;
            hash_mapS[s[i]]=i+1;
            hash_mapT[t[i]]=i+1;
        }
        return true;
    }
};