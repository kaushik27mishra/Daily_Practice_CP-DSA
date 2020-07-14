int Solution::romanToInt(string A) {
    int res=0;
    for(int i=0;i<A.size();i++) {
        if(i<A.size()-1 && A[i]=='C' && A[i+1]=='M') {
            res+=900;i++;
        }
        else if(i<A.size()-1 && A[i]=='C' && A[i+1]=='D') {
            res+=400;i++;
        }
        else if(i<A.size()-1 && A[i]=='X' && A[i+1]=='C') {
            res+=90;i++;
        }
        else if(i<A.size()-1 && A[i]=='X' && A[i+1]=='L') {
            res+=40;i++;
        }
        else if(i<A.size()-1 && A[i]=='I' && A[i+1]=='X') {
            res+=9;i++;
        }
        else if(i<A.size()-1 && A[i]=='I' && A[i+1]=='V') {
            res+=4;i++;
        }
        else if(A[i]=='M') {
            res+=1000;
        }
        else if(A[i]=='D') {
            res+=500;
        }
        else if(A[i]=='C') {
            res+=100;
        }
        else if(A[i]=='L') {
            res+=50;
        }
        else if(A[i]=='X') {
            res+=10;
        }
        else if(A[i]=='V') {
            res+=5;
        }
        else if(A[i]=='I') {
            res+=1;
        }
    }
    return res;
}
