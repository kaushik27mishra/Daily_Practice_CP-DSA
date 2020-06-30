vector<int> Solution::findPerm(const string A, int B) {
    vector<int> res;
    int max = B;
    int min =1;
    for(int i=B-2 ; i>=0  ; i--){
        if(A[i] == 'I'){
            res.push_back(max);
            max--;
        }
        else{
            res.push_back(min);
            min++;
        }
    }
    res.push_back(max);
    reverse(res.begin(),res.end());
    return res;
}
