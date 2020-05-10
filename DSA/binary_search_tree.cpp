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

void levelOrder(BstNode* root) {
    if(root==NULL) return;
    queue<BstNode*>Q;
    Q.push(root);
    while(!Q.empty()) {
        BstNode* current = Q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL) Q.push(current->left);
        if(current->right!=NULL) Q.push(current->right);
        Q.pop();
    }
    cout<<endl;
}

int FindHeight(BstNode* root) {
    if(root==NULL) {
        return -1;
    }    
    
    return max(FindHeight(root->left),FindHeight(root->right)) + 1;
}

int main() {
    BstNode* root=NULL;     
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);    
    root = Insert(root,25);    
    root = Insert(root,8);    
    root = Insert(root,12);    
    // cout<<FindMin(root)<<endl;
    // cout<<FindMax(root)<<endl;
    levelOrder(root);
    // int n;
    // cin>>n;
    // if(Search(root,n)) cout<<"Found"<<endl;
    // else cout<<"Not found"<<endl;
    return 0;
}