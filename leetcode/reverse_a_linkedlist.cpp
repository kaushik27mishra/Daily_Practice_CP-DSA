/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* adv=NULL;
        ListNode* curr=head;
        while(curr!=NULL) {
            adv=curr->next;
            curr->next=prev;
            prev=curr;
            curr=adv;
        }
        head=prev;
        return head;
    }
};

/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL )
            return head;
        ListNode *temp=head;
        head=reverseList(head->next);
        ListNode* tail=head;
        while(tail->next!=NULL) {
            tail=tail->next;
        }
        tail->next=temp;
        temp->next=NULL;
        return head;
    }
};
*/