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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       int len=0;
       ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len==1){
            head=NULL;
            return head;
        }
        temp=head;
        int i=0;
        ListNode* prev=temp;
        if(len-n==0){
            head=head->next;
            return head;
        }
        while(i<len-n){
            i++;
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
        
    }
};