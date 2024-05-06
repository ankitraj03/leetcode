/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy = new Node(-1);
        Node* temp = head;
        Node* t2 = dummy;

        while (temp != NULL) {
            int valu = temp->val;
            Node* nnode = new Node(valu);
            t2->next = nnode;
            t2 = t2->next;
            temp = temp->next;
        }
        t2->next = NULL;
        temp = head;
        Node* curr = dummy;
        Node* t3 = head;
        Node* t4 = dummy->next;
        Node* rand = NULL;
        while (temp != NULL) {
            curr = curr->next;
            if (temp->random == NULL) {
                curr->random = NULL;
            } else {
                rand = temp->random;
                int count = 0;

                while (t3 != NULL) {
                    count+=1;
                    if (t3 == rand)
                        break;
                    t3=t3->next;
                }
                while (count >= 0 && t4 != NULL) {
                    count--;
                    if (count == 0) {
                        curr->random = t4;
                    }
                    t4 = t4->next;
                }
                t3 = head;
                t4 = dummy->next;
                count = 0;
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};