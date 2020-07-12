/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int countA=0,countB=0;
        while(tempA!=NULL) {
            countA++;
            tempA=tempA->next;
        }
        
        while(tempB!=NULL) {
            countB++;
            tempB=tempB->next;
        }
        
        int count=abs(countB-countA);
        if(countB>countA) {
            tempB=headB;
            tempA=headA;
            while(count!=0){
                tempB=tempB->next;
                count--;
            }
        }
        else {
            tempA=headA;
            tempB=headB;
            while(count!=0){
                tempA=tempA->next;
                count--;
            }            
        }
        
        while(tempA!=NULL && tempB!=NULL) {
            if(tempA==tempB)
                return tempA;
            tempA=tempA->next;
            tempB=tempB->next;
        }
        
        return NULL;
    }
};