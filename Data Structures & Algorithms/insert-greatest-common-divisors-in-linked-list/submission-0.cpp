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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode*cur=head;
        while(cur->next){
            int n1=cur->val;
            int n2=cur->next->val;
            ListNode*temp=new ListNode(gcd(n1,n2));
            temp->next=cur->next;
            cur->next=temp;
            cur=temp->next;




        }
        return head;
    }
};