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
        vector<int> nums1, nums2;
        while(l1) {
            nums1.push_back(l1->val);
            l1 = l1->next;
        }
        
        while(l2) {
            nums2.push_back(l2->val);
            l2 = l2->next;
        }

        int m = nums1.size(), n = nums2.size();
        int sum = 0, carry = 0;

        ListNode *head = nullptr, *p = nullptr;

        for(int i = m - 1, j = n - 1; i >= 0 || j >= 0 || carry > 0; i--, j--) {
            sum = carry;
            if(i >= 0) 
                sum += nums1[i];

            if(j >= 0)
                sum += nums2[j];

            carry = sum / 10;

            p = new ListNode(sum%10);
            p->next = head;
            head = p;
        }

        return head;
        
    }
};