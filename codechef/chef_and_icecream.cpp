#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long int t, money, n;
	bool flag;
	cin>>t;
	long long int ctr5=0,ctr10=0;
	while(t--)
	{
	    ctr5 = 0;
	    ctr10 = 0;
	    flag = true;
	    cin>>n;
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>money;
	        if(money==5)
	            {
	                ctr5++;
	            }
	       else if(money==10)
	            {
	                if(ctr5>0)
	                {
	                    ctr5--;
	                    ctr10++;
	                }
	                else
	                {
	                    flag=false;
	                }
	            }
	       else if(money==15)
	            {
	                if(ctr10>0)
	                {
	                    ctr10--;
	                }
	                else if(ctr5>1)
	                {
	                    ctr5-=2;
	                }
	                else
	                {
	                    flag = false;
	                }
	                
	            }
	    }
	    if(flag)
	        cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}