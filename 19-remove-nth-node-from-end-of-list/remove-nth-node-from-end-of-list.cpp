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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    ListNode* temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    if (n == count)
    {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    temp = head;
    for (int i = 0; i < count - n; i++)
    {
        if (i == count - n - 1)
        {
            ListNode* tempNode = temp->next;
            temp->next = tempNode->next;
            delete tempNode;
        }
        temp = temp->next;
    }

    return head;
}

};