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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ***** MY LOGIC *** failed to pass 730th case :(
    //     ListNode* dummy= new ListNode(-1);
    //     ListNode* t=dummy;
    //     int carry=0;
    //     int sum=0;
    //     while(l1!=NULL && l2!=NULL){

    //         if(l1==NULL){
    //             sum=l2->val+carry;
    //         }
    //         if(l2==NULL){
    //             sum=l1->val+carry;
    //         }
    //         else{
    //         sum=l1->val+l2->val+carry;
    //         }
    //         carry=sum/10;
    //         sum=sum%10;
    //         ListNode* temp= new ListNode(sum);
    //         t->next=temp;
    //         t=t->next;
    //         l1=l1->next;
    //         l2=l2->next;
    //     }
    //     if(carry!=0){
    //     ListNode* n=new ListNode(carry);
    //     t->next=n;
    //     }
    //     l1=dummy->next;
    // return l1;

    // with some help
    ListNode* dummy = new ListNode(-1);
        ListNode* t = dummy;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            t->next = new ListNode(sum % 10);
            t = t->next;
        }
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
    
};