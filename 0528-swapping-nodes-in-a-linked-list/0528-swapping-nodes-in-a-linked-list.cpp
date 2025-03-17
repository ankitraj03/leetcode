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
    ListNode* swapNodes(ListNode* head, int k) {
        int l=k, r=0;
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        r=count-k+1;
        temp=head;
        ListNode* left=NULL;
        ListNode* right=NULL;
        count=0;
        while(temp){
            count++;
            if(count==l)
            left=temp;
            if(count==r)
            right=temp;
            temp=temp->next;
        }
        swap(left->val, right->val);
        return head;
    }
};