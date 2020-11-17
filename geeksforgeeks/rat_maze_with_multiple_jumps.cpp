// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

void print(int n, vector<int> sol[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(int n, vector<int> maze[]);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> maze[n];
        for (int i = 0; i < n; i++) {
            maze[i].assign(n, 0);
            for (int j = 0; j < n; j++) cin >> maze[i][j];
        }

        solve(n, maze);
    }
    return 0;
}
// } Driver Code Ends


bool isSafe(int p,int q,vector<int> maze[],int n) {
    return p<n && q<n && maze[p][q]!=0;    
}

bool helper(int p,int q,vector<int> maze[],int n,vector<int> sol[]) {
    if(p==(n-1) && q==(n-1)) {
        sol[p][q]=1;
        return true;
    }
    
    if(isSafe(p,q,maze,n)) {
        sol[p][q]=1;
        
        for(int r=1;r<=maze[p][q] && r<n;r++) {
            if(helper(p+r,q,maze,n,sol))
                return true;
            if(helper(p,q+r,maze,n,sol))
                return true;
        }
        sol[p][q]=0;
        return false;
    }
    return false;
}

void solve(int N, vector<int> maze[]) {
    vector<int> sol[N];
    for (int i = 0; i < N; i++) {
        sol[i].assign(N, 0);
        for (int j = 0; j < N; j++) sol[i][j]=0;
    }
    if(helper(0,0,maze,N,sol)) {
       print(N,sol);
    }
    else {
        cout<<-1<<endl;
    }
}