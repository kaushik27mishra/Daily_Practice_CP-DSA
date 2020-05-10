#include <bits/stdc++.h>
using namespace std;

class BstNode {
    public:
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

BstNode* Insert(BstNode* root,int data) {
    if(root==NULL) {
        root = GetNewNode(data);
    }
    else if(data<= root->data) {
        root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }

    return root;
}

bool Search(BstNode* root,int data) {
    if(root==NULL) return false;
    else if(root->data==data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

int FindMin(BstNode* root) {
    if(root==NULL) {
        return -1;
    }
    BstNode* current = root;
    while(current->left!=NULL) {
        current=current->left;
    }
    return current->data;
}

int FindMax(BstNode* root) {
    if(root==NULL) {
        return -1;
    }
    BstNode* current = root;
    while(current->right!=NULL) {
        current=current->right;
    }
    return current->data;
}

int main() {
    BstNode* root=NULL;     
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);    
    root = Insert(root,25);    
    root = Insert(root,8);    
    root = Insert(root,12);    
    cout<<FindMin(root)<<endl;
    cout<<FindMax(root)<<endl;
    int n;
    cin>>n;
    if(Search(root,n)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}