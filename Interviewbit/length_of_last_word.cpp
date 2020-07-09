int Solution::lengthOfLastWord(const string A) {
    int count=0;
    int i=A.size()-1;
    while(A[i]==' ') {
        i--;
    }
    
    while(i>=0) {
        if(A[i]==' ') {
            return count;
        }
        count++;
        i--;
    }
    return count;
}
