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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        int length=0;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }

        length/=2;
        temp=head;
        while(length){
            length--;
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
    }
};