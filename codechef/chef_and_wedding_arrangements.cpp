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

int min_conflicts_table(vector<int> &guests,int tables) {
    int n = guests.size();
    int count=0;
    int start=0;
    while(tables>1) {
        unordered_map<int,int> table;
        while(start<n) {
            if(table.find(guests[start])==table.end()) {
                table[guests[start]]=1;
            }
            else {
                break;
            } 
            start++;
        }
        tables--;
    }

    unordered_map<int,vector<int>> table;
    while(start<n) {
        table[guests[start]].push_back(start+1);
        start++;
    }

    for(auto itr : table) {
        if(itr.second.size()!=1) {
            count=itr.second.size();
        }
    }

    return count;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n,k;
        cin>>n>>k;

        unordered_map<int,vector<int>> family_grp;

        vector<int> guests(n,0);

        for(int i=0;i<n;i++) {
            cin>>guests[i];
            family_grp[guests[i]].push_back(i+1);
        }

        int max_tables=family_grp.size(); 

        vector<int> conflicts(max_tables+1,0);

        for(int i=1;i<=max_tables;i++) {
            conflicts[i]=min_conflicts_table(guests,i);
            if(conflicts[i]==0)
                break;
        }

        int res=INT_MAX;
        for(int i=1;i<=max_tables;i++) {
            res=min(res,i*k+conflicts[i]);
            if(conflicts[i]==0)
                break;
        }
        cout<<res<<endl;
    }

    return 0;
}
/*
    we have to minimize the sum of total cost of tables (K*T) + number of guests dissatisfied
    so we have to first decrease one varible as both can't be minimised at the same time!
    we will make an array of tables which index corresponds to number of tables and its value correspons to minimum number of arrguments possible
    now we can easily iterate through the array and find the minimum number

    TODO:-
    Find a way to count the minimum number of arrguments if there is n tables
*/