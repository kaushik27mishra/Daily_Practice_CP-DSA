/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
bool check(ListNode *p);
ListNode* temp; 
int Solution::lPalin(ListNode* A) {
    temp=A;
    return check(A) ? 1 : 0; 
}

bool check(ListNode *p) {
    if(p==NULL) return true;
    bool isPal=check(p->next) & (p->val==temp->val);
    temp=temp->next;
    return isPal;
}


