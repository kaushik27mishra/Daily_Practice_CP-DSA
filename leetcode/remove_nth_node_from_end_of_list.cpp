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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *l1=head;
        ListNode *l2=head;
        ListNode *prev=NULL;
        while(n!=1) {
            l1=l1->next;
            n--;
        }
    
        while(l1->next!=NULL) {
            prev=l2;
            l1=l1->next;
            l2=l2->next;
        }
        
        if(prev==NULL) {
            head=head->next;
        }
        else {
            prev->next=l2->next;
        }
        delete(l2);
        
        return head;
    }
    
};