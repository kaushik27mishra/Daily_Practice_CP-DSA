string Solution::convertToTitle(int A) {
    string res="";
    while(A!=0) {
        if(A%26!=0) {
            res=res+(char)((A%26)+64);
            A=A/26;
        }else {
            res=res+'Z';
            A=A/26-1;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
