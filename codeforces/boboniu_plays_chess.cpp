#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define ROF(i,a,b) for(int i=(a);i>=(b);--i)

int n,m,sx,sy;

void f(int i,int j){
    printf("%d %d\n",(i+sx-2)%n+1,(j+sy-2)%m+1);
}
int main(){
    scanf("%d%d%d%d",&n,&m,&sx,&sy);
    FOR(i,1,n){
        if(i&1)FOR(j,1,m)f(i,j);
        else ROF(j,m,1)f(i,j);
    }
    return 0;
}	