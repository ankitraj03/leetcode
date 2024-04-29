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
    ListNode* findmid(ListNode* head){
        ListNode* slow= head;
        ListNode* fast=head->next;

        while(slow->next!=NULL && fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    void mergesort(ListNode* &head){
        // ListNode* temp=head;
        if(head==NULL || head->next==NULL){
            return;
        }

        ListNode* mid=findmid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;

        mergesort(left);
        mergesort(right);

        head=merge(left, right);
        
    }
    ListNode* merge(ListNode* left, ListNode* right){
        if(right==NULL)
        return left;

        if(left==NULL)
        return right;

        ListNode* result=NULL;
        if(left->val<right->val){
            result=left;
            result->next=merge(left->next, right);
        }
        else{
            result=right;
            result->next=merge(right->next, left);
        }
        return result;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* temp=list1;
        // ListNode* sol=NULL;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=list2;
        mergesort(list1);

        return list1;
    }
};