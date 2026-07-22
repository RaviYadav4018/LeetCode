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
    ListNode* reverse(ListNode* head)
    
    {
        if(head==NULL) return NULL;
        ListNode* temp=head;
        ListNode* pre=NULL;
        while(temp!=NULL)
        {
            ListNode* tt=temp->next;
            temp->next=pre;
            pre=temp;
            temp=tt;
        }
        return pre;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL) return NULL;
        
        ListNode* pre=new ListNode(-1);
        pre->next=head;
        int cnt=0;
        ListNode* temp=pre;
       
        while(temp!=NULL)
        {  
            if(cnt==left-1)
            {
                ListNode* te=temp;
                ListNode* t=temp->next;
                temp=temp->next;
                te->next=NULL;
                cnt++;

                while(temp!=NULL&&cnt<right)
                {
                    temp=temp->next;
                    cnt++;
                }
                ListNode* tee=NULL;
                if(temp!=NULL) 
                {
                    tee=temp->next;
                    temp->next=NULL;
                }
                te->next=reverse(t);
                if(tee!=NULL)t->next=tee;
                break;

            }
            else
            {
               
                temp=temp->next;
                cnt++;
            }
        }
       return pre->next;
    }
};