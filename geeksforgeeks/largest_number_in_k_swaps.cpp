// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string findMaximumNum(string str, int k);

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        cout<< findMaximumNum(str, k) << endl;
    }
    return 0;
}
// } Driver Code Ends

void helper(string str,int k,string &res,int ctr) {
    if(k==0)
        return;
    int n = str.size();
    
    char maxm = str[ctr];
    for (int j = ctr + 1; j < n; j++) {
        if (maxm < str[j])
            maxm = str[j];
    }
 
    if (maxm != str[ctr])
        --k;
        
    for(int j=ctr;j<n;j++) {
        if(str[j]==maxm) {
            swap(str[j],str[ctr]);
            if(str.compare(res) > 0)
                res=str;
            helper(str,k,res,ctr+1);
            swap(str[ctr],str[j]);
        }
    }
}

string findMaximumNum(string str, int k)
{   string res=str;
    helper(str,k,res,0);
    return res;
}