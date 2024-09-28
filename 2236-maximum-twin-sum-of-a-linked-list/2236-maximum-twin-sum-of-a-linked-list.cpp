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
    int pairSum(ListNode* head) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        int i=0, j=temp.size()-1;
        int ans=0;
        while(i<j){
            if(ans<temp[i]+temp[j])
            ans=temp[i]+temp[j];
            i++;
            j--;
        }
        return ans;
    }
};