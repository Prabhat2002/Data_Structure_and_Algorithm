/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* dfs(Node* node)
    {
        if (!node)return node;
        auto child = node->child;
        auto next = node->next;
        node->child = nullptr;
        if (child && next)
        {
            node->next = child;
            child->prev = node;
            
            auto end_child = dfs(child);
            auto end_next = dfs(next);
            
            end_child->next = next;
            next->prev = end_child;
            return end_next;
        }
        else if(child && !next)
        {
            node->next = child;
            child->prev = node;
            auto end_child = dfs(child);
            return end_child;
        }
        else if(!child && next)
        {
            auto end_next = dfs(next);
            return end_next;
        }
        else
        {
            return node;
        }
    }
    Node* flatten(Node* head) 
    {
        dfs(head);
        return head;
    }
};
