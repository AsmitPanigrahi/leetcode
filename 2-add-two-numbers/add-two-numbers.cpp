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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode* temp1 = l1;
    ListNode* temp2 = l2;
    int sum = 0;
    int carry = 0;
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    while (temp1 != nullptr || temp2 != nullptr || carry != 0) 
    {
        sum = carry + (temp1 ? temp1->val : 0) + (temp2 ? temp2->val : 0);

        carry = sum / 10;
        sum = sum % 10;

        current->next = new ListNode(sum);
        current = current->next;

        if (temp1) temp1 = temp1->next;
        if (temp2) temp2 = temp2->next;
    }

    ListNode* newHead = dummy->next;
    delete dummy;

    return newHead;
}

};