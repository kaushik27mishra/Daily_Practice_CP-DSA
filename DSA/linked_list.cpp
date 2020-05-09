#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void insert(Node **pointerToHead,int x,int n) {
    Node *temp1 = new Node();

    temp1->data=x;

    temp1->next=NULL;

    if(n==1) {
        temp1->next= (*pointerToHead);
        (*pointerToHead)=temp1;
        return;
    }

    Node *temp2 = (*pointerToHead);
    for(int i=0;i<n-2;i++) {
        temp2=temp2->next;
    } 

    temp1->next=temp2->next;
    temp2->next=temp1;
}

void Delete(Node **pointerToHead, int n) {
    Node *temp1= (*pointerToHead);

    if(n==1) {
        (*pointerToHead)=temp1->next;
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
// void insert(Node **pointerToHead,int x) { 
    // Inserts an element at the beginning of the linked list
    // Node *temp= new Node();
// 
    // temp->data=x;
// 
    // temp->next= *pointerToHead;
// 
    // *pointerToHead=temp;
// }
// 
void print(Node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

int main() {
    Node* head=NULL;
    insert(&head,2,1);
    insert(&head,3,2);
    insert(&head,4,1);
    insert(&head,4,3);
    print(head);
    Delete(&head,2);
    print(head);

}
