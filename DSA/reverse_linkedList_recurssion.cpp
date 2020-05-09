#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};
Node *head;

void insert(int x,int n) {
    Node *temp1 = new Node();

    temp1->data=x;

    temp1->next=NULL;

    if(n==1) {
        temp1->next= head;
        head=temp1;
        return;
    }

    Node *temp2 = head;
    for(int i=0;i<n-2;i++) {
        temp2=temp2->next;
    } 

    temp1->next=temp2->next;
    temp2->next=temp1;
}

void Delete(int n) {
    Node *temp1= head;

    if(n==1) {
        head=temp1->next;
        free(temp1);
        return;
    }

    for(int i=0;i<n-2;i++) {
        temp1=temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}

void reverse(Node *p) {
    if(p->next==NULL) {
        head=p;
        return;
    }
    reverse(p->next);
    
    Node *q=p->next;
    q->next=p;
    p->next=NULL;
}

void print(Node* head) {
    if(head==NULL) {
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
    // while(head!=NULL) {
        // cout<<head->data<<" ";
        // head=head->next;
    // }
    // cout<<"\n";
}

void printReverse(Node *head) {
    if(head==NULL) {
        return;
    }
    print(head->next);
    cout<<head->data<<" ";
}

int main() {
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(4,3);
    print(head);
    cout<<"\n";
    // Delete(2);
    reverse(head);
    printReverse(head);
    cout<<"\n";
    return 0;
}
