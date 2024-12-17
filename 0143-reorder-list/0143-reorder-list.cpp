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
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return;
        deque<ListNode*> q;
        ListNode* dummy = new ListNode(-1);
        while (head != NULL) {
            q.push_back(head);
            head = head->next;
        }
        ListNode* temp = dummy;
        while (!q.empty()) {
            if (!q.empty()) {
                temp->next = q.front();
                q.pop_front();
                temp = temp->next;
            }

            if (!q.empty()) {
                temp->next = q.back();
                q.pop_back();
                temp = temp->next;
            }
        }
        temp->next=NULL;
        head = dummy->next;
    }
};