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

class BSTNode {
    public:
    int data;
    BSTNode *left;
    BSTNode *right;

    BSTNode(int d) {
        data=d;
        left=NULL;
        right=NULL;
    }
};

void levelorderTraversal(BSTNode* root) {
    if(root==NULL)
        return;

    queue<BSTNode*> q;
    q.push(root);
    while(!q.empty()){
        BSTNode *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

int main() {

    BSTNode *root = new BSTNode(1);
    root->left = new BSTNode(2);
    root->right = new BSTNode(3);
    root->left->left = new BSTNode(4);
    root->left->right = new BSTNode(5);
    root->right->right = new BSTNode(6);
    levelorderTraversal(root);
    return 0;
}