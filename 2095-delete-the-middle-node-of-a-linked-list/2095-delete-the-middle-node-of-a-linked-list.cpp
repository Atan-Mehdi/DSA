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
    int getLength(ListNode* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        int len=getLength(head);
        int ans=(len/2);
        ListNode* temp=head;
        ListNode* curr=head;
        int cnt=0;
        while(cnt<ans){
            curr=temp;
            temp=temp->next;
            cnt++;
        }
        curr->next=temp->next;
        delete(temp);
        return head;
        // ListNode* slow=head;
        // ListNode* fast=head->next;
        // ListNode* temp=head;
        // while(fast!=NULL && fast->next!=NULL){
        //     fast=fast->next->next;
        //     temp=slow;
        //     slow=slow->next;
        // }
        // temp->next=slow->next;
        // delete(slow);
        // return head;
        
    }
};