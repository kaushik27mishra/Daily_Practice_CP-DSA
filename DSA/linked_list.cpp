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

class Node { 
public: 
	int data; 
	Node* next; 
}; 

void printList(Node *n) {
    while(n!=NULL) {
        cout<<n->data<<" ";
        n=n->next;
    }
}


int main() {
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    printList(head);
    return 0;
}