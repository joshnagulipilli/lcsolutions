/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // ListNode *nextNode = node->next;
        // node->val = nextNode->val;
        // node->next = nextNode->next;
        // nextNode->next = nullptr;
        // delete(nextNode);

        ListNode *temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
        temp->next=NULL;
        delete(temp);
      
    }
};