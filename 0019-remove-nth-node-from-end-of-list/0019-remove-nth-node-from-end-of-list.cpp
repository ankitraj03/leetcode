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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++; 
        }
        if(count==1){
            return NULL;
        }
        count=count-n;
        if(count==0){
            head=head->next;
            return head;
        }
        ListNode* prev=head;
        temp=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
            count--;
            if(count==0){
                prev->next=temp->next;
                break;
            }
        }
        return head;
    }
};