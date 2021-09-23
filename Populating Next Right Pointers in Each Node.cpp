/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
     Node* pre = root;
      Node* nextPre = NULL;
      Node* prev = NULL;
      while(pre){
         while(pre){
            //cout << pre->val << endl;
            if(pre->left){
               if(prev){
                  prev->next = pre->left;
               }else{
                  nextPre = pre->left;
               }
               prev = pre->left;
            }
            if(pre->right){
               if(prev){
                  prev->next = pre->right;
               }else{
                  nextPre = pre->right;
               }
               prev = pre->right;
            }
            pre = pre->next;
         }
         //cout << "*" << endl;
         pre = nextPre;
         nextPre = NULL;
         prev = NULL;
      }
      return root;
   }
};
