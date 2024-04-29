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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        temp=head;

        if(temp==NULL)
        return nullptr;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }

        int count2=0;
        temp=head;
        count=count/2+1;
        while(temp!=NULL)
        {
            count2++;
            if(count2==count)
            break;

            temp=temp->next;
        }

        return temp;
    }
};