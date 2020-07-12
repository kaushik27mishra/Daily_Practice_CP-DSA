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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,carry=0;
        ListNode *temp1=l1;
        ListNode* temp;
        ListNode *temp2=l2;
        ListNode *res=NULL;
        ListNode *prev=NULL;
        while(temp1!=NULL || temp2!=NULL) {
            sum=(temp1 ? temp1->val : 0) + (temp2 ? temp2->val : 0) + carry;
            carry= (sum>=10) ? 1: 0;
            sum%=10;
            temp= new ListNode(sum);
            if(res==NULL) {
                res=temp;
            }
            else {
                prev->next=temp;
            }
            prev=temp;
            if(temp1)
                temp1=temp1->next;
            if(temp2)
                temp2=temp2->next;
        }
        if(carry>0) {
            temp->next=new ListNode(carry);
        }
        return res;
    }
};