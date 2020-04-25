#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << ' ' << x << endl;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; i < n; i++)
#define N 101
#define ll long long
#define endl '\n'
#define mod 1000000007
#define pb push_back
#define F first
#define S second

char Stack[100];
int ind=0;

void push(char x)
{
    ind++;
    Stack[ind] = x;
}

void pop()
{
    Stack[ind] = '\0';
    ind--;
}

bool isEmpty()
{
    if (ind >0 )
        return false;
    else
        return true;
}

char Top()
{
    return Stack[ind];
}

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        ind = 0;
        string a;
        cin>>a;
        bool flag;
        fo(i, a.length())
        {   
            if (a[i] == '(' || a[i] == '[' || a[i] == '{')
            {
                push(a[i]);
            }
            else
            {
                char top=Top();
                switch (a[i])
                {
                    case ')':
                        if (top == '(') {
                            pop();
                        }
                    case '}':
                        if (top == '{') {
                            pop();
                        }
                    case ']':
                        if (top == '[') {
                            pop();
                        }
                }
            }
        }

        flag=isEmpty();
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}