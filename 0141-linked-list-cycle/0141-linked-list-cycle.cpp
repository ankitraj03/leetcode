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
    bool hasCycle(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        if (head==NULL || head->next == NULL)
            return 0;
        while (temp1 != NULL) {
            temp1 = temp1->next;
            temp2 = temp2->next->next;
            if (temp1 == temp2)
                return 1;

            if (temp1 == NULL || temp2 == NULL || temp1->next == NULL || 
                temp2->next == NULL)
                return 0;
        }
        return 0;
    }
};