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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode *temp = head;
        head = head -> next;
        head = insertionSortList(head);
        head = insert(head,temp);
        return head;
    }
    
    ListNode* insert(ListNode *head,ListNode *temp) {
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(curr!=NULL && curr->val<temp->val) {
            prev = curr;
            curr=curr->next;
        }
        
        if(prev==NULL) {
            temp->next = head;
            head = temp;
        }
        else {
            prev->next = temp;
            temp->next = curr;
        }
        
        return head;
    }
};