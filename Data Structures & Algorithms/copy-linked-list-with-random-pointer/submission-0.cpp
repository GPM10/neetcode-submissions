/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mapping;
        Node*cur=head;
        while(cur){
            mapping[cur]=new Node(cur->val);
            cur=cur->next;
        }
        cur=head;
        while(cur){
            mapping[cur]->next=mapping[cur->next];
            mapping[cur]->random=mapping[cur->random];
            cur=cur->next;
        }
       return mapping[head];
        
    }
};
