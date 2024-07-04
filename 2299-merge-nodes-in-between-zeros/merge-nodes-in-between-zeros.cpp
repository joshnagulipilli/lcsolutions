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
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp= head->next;
        ListNode* prev=dummy;
        int sum=0;
        while(temp!=NULL){
            if(temp->val!=0)
            {
                sum+=temp->val;
                temp=temp->next; 
            }
            else
            {
                ListNode* ptr=new ListNode(sum);
                prev->next=ptr;
                prev=prev->next;
                sum=0;
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};