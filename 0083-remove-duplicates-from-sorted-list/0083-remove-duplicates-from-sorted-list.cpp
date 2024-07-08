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
    ListNode* ret(ListNode* n, int value) {
        while (n && n->val == value) {
            n = n->next;
        }
        return n;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* x = head;
        while (x) {
            x->next = ret(x, x->val);
            x = x->next;
        }
        return head;
    }
};