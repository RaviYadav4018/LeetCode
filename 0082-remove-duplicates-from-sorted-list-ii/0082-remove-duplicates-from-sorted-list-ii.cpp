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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* temp=head;
        ListNode* pre1=new ListNode(-1);
       
        pre1->next=temp;
        ListNode* pre=pre1;
        while(temp!=NULL&&temp->next!=NULL)
        {
            if(temp->val==temp->next->val)
            {
                ListNode* t=temp;
                temp=temp->next;
                while(temp->next!=NULL&&temp->val==temp->next->val)
                {
                   temp=temp->next;
                }
                pre->next=temp->next;
                
                temp=temp->next;
            }
            else
            {
                pre=temp;
                temp=temp->next;

            }
        }
        return pre1->next;
        
        
    }
};