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
    ListNode* reverse(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(ListNode* &head, ListNode* &tail, int d) {
        
        ListNode* temp = new ListNode(d);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    ListNode* add(ListNode* first, ListNode* second){
        int carry=0;
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        
        while(first!=NULL || second!=NULL || carry!=0){
            int val1=0;
            if(first!=NULL)
               val1=first->val;
            int val2=0;
            if(second!=NULL)
               val2=second->val;
            int sum=val1+val2+carry;
            int digit=sum%10;
            
            //create node & add in ans LL
            insertAtTail(ansHead,ansTail,digit);
            
            carry=sum/10;
            
            if(first!=NULL){
                first=first->next;
            }
            if(second!=NULL){
                second=second->next;
            }
        }
        return ansHead;
    }
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        //step1-reverse LL
        // first=reverse(first);
        // second=reverse(second);
        
        //step2-add 
        ListNode* ans=add(first,second);
        
        //step3-reverse ans LL
        // ans=reverse(ans);
        
        return ans;
    }
};