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
    ListNode* removeNodes(ListNode* head) {
        return solve(head, NULL);
       
    }
    ListNode* solve(ListNode* head, ListNode* curr){
        if (head == NULL)
            return curr;

        ListNode* nextNode = solve(head->next, curr);

        if (nextNode == NULL || head->val >= nextNode->val) {
            head->next = nextNode;
            return head;
        }

        return nextNode;
    }
};