# include <bits/stdc++.h>
using namespace std;
ifstream f("data.in");
int A[1000], B[1000], auxB, n, m, Aelements, i, j, Left, Right, X, nrQueries;
int main ()
{
    f>>Aelements;

    for (i=1; i<=Aelements; ++i)
        f>>A[i];

    // a=a+b ==  a+=b

    f>>nrQueries;
    for (j=1; j<=nrQueries; ++j) {
        f>>Left>>Right>>X;
        B[Left]+=X;
        B[Right+1]-=X;
    }

    for (i=1; i<=Aelements; ++i) {
        auxB+=B[i]; // in auxB we keep the sum B[1] + B[2] + ... + B[i]
        A[i]+=auxB;

        cout<<A[i]<<" ";
    }


    return 0;
}