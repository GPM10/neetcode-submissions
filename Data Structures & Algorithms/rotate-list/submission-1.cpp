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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0){

        
            return head;}
        int length=1;
        ListNode*tail=head;
        while(tail->next){
            tail=tail->next;
            length++;
        }


        k = k % length;
        if (k == 0)
            return head;
        ListNode*right=head;
        ListNode*left=head;

        while(k>0){
            right=right->next;
            k--;
        }
        while(right->next){
            right=right->next;
            left=left->next;
        }
        ListNode*newhead=left->next;
        left->next=nullptr;
        right->next=head;
        return newhead;


    }
};