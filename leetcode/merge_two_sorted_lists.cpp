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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *tail=NULL;
        ListNode *dummy=new ListNode();
        ListNode *curr1=l1;
        ListNode *curr2=l2;
        tail=dummy;
        while(curr1!=NULL && curr2!=NULL) {
            if(curr1->val<curr2->val) {
                tail->next=curr1;
                tail=tail->next;
                curr1=curr1->next;
                tail->next=NULL;
            }
            else {
                tail->next=curr2;
                tail=tail->next;
                curr2=curr2->next;
                tail->next=NULL;
            }
        }
        
        if(curr1!=NULL) {
            tail->next=curr1;
        }
        
        if(curr2!=NULL) {
            tail->next=curr2;
        }
        
        return dummy->next;
    }
};