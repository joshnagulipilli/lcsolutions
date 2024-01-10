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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

           ListNode * head=NULL,*temp=NULL; 

        while(list1 && list2){
           ListNode *ptr=new ListNode;
            if(list1->val <list2->val)
            {
                ptr->val=list1->val;
                list1=list1->next;
            }
            else{
                ptr->val=list2->val;
                list2=list2->next;
            }
            if(head!=NULL){
                temp->next=ptr;
                temp=ptr;
            }
            else{
                head=ptr;
                temp=ptr;
            }
        }

        while(list1){
            ListNode *ptr=new ListNode;
            ptr->val=list1->val;
                list1=list1->next;
                if(head!=NULL){
                temp->next=ptr;
                temp=ptr;
            }
            else{
                head=ptr;
                temp=ptr;
            }
        }
         while(list2){
            ListNode *ptr=new ListNode;
            ptr->val=list2->val;
                list2=list2->next;
                if(head!=NULL){
                temp->next=ptr;
                temp=ptr;
            }
            else{
                head=ptr;
                temp=ptr;
            }
        }
        return head;
    }
};