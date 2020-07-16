/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* curr=A->next;
    ListNode* prev=A;
    while(curr!=NULL) {
        if(prev->val==curr->val) {
            prev->next=curr->next;
            curr=curr->next;
        }
        else {
            prev=curr;
            curr=curr->next;
        }
    }
    return A;
}
