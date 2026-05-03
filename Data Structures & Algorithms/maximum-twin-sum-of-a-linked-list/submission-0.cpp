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
    int pairSum(ListNode* head) {ListNode*slow=head;
        ListNode*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode*prev=nullptr;
        ListNode*cur=slow;
        //ListNode*tmp=cur->next;
        while(cur){
            ListNode*tmp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=tmp;
            
        }
        ListNode*first=head;
        ListNode*last=prev;
        int sum=INT_MIN;
        while(last){
            sum=max(sum,first->val+last->val);
            first=first->next;
            last=last->next;

        }
        return sum;
        
        
    }
};