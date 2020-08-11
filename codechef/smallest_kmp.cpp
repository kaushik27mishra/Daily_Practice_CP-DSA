#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
    int T;
    cin>>T;
    while(T--) {
        string s;
        string p;
        cin>>s; // main string
        cin>>p; // sub string
        vector<int> hash_map_p(26,0);
        vector<int> hash_map_s(26,0);
        for(int i=0;p[i];i++) {
            hash_map_p[p[i]-'a']++;
        }

        for(int i=0;s[i];i++) {
            hash_map_s[s[i]-'a']++;
        }

        for(int i=0;i<26;i++) {
            hash_map_s[i]=hash_map_s[i]-hash_map_p[i];
        }
        
        int p_first=0;
        for(p_first=0;p_first<26;p_first++) {
            if(hash_map_p[p_first]!=0)
                break;
        }
        
        string res="";
        for(int i=0;i<26 && i<=p_first;i++) {
            while(hash_map_s[i]>0) {
                res=res+(char)(i+(int)'a');
                hash_map_s[i]--;
            }
        }
        res=res+p;
        for(int i=0;i<26;i++) {
            while(hash_map_s[i]>0){
                res=res+(char)(i+(int)'a');
                hash_map_s[i]--;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}