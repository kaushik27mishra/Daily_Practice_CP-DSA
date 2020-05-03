
# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n=11; 
    int A[]={0,1,1,4,5,1,6,6,1,1,3, 1};

    sort (A+1, A+n+1);

    int majorityElement=A[n/2+1];
    int nrOccurrences=0;

    for (int i=1; i<=n; ++i)
        if (A[i]==majorityElement) ++nrOccurrences;

    if (nrOccurrences >= n/2 + 1) {
        cout<<"The majority element is "<<majorityElement;
        cout<<" and it appears "<<nrOccurrences<<" times";
    } else cout<<"-1\n";

    return 0;
}