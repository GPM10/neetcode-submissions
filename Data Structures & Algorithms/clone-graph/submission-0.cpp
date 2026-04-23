/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node){
            return nullptr;
        }
        unordered_map<Node*,Node*>old_to_new;
        queue<Node*>q;
        old_to_new[node]=new Node(node->val);
        q.push(node);
        while(!q.empty()){
            Node*curr=q.front();
            q.pop();
            for(Node*nei:curr->neighbors){
                if(!old_to_new.count(nei)){
                old_to_new[nei]=new Node(nei->val);
                q.push(nei);
                }
                old_to_new[curr]->neighbors.push_back(old_to_new[nei]);
                
                
            }


        }

    return old_to_new[node];

        
    }
};
