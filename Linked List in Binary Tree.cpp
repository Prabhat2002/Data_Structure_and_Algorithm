Method 1 :

class Solution 
{
 public:
    bool checkpath(ListNode* head,TreeNode* root)
    {
        if(!head)
            return 1;
        if(root==NULL && head!=NULL)
            return 0;
        if(root->val!=head->val)
            return 0;
        return checkpath(head->next,root->left)||checkpath(head->next,root->right);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root==NULL)
            return false;
        if(head==NULL)
            return true;
        if(root->val==head->val)
        {
            if(checkpath(head,root))
                return 1;
        }
        return isSubPath(head,root->left)||isSubPath(head,root->right);
    }
};

Method : 2

class Solution 
{
public:
      bool inpath(ListNode* head, TreeNode* root)
      {
        if(root==NULL && head!=NULL)
            return false;  
        if(head==NULL)
            return true;
        if(head->val!=root->val)
            return false;
        bool b1=inpath(head->next,root->left);
        bool b2=inpath(head->next,root->right);
        return b1||b2;
    }
    bool isSubPath(ListNode* head, TreeNode* root) 
    {     
        //base case if root is NULL return false (CHECKING NOT POSSIBLE) 
        if(root==NULL)
            return false;
        else if(head==NULL)
            return true;
        else if(root->val == head->val)
        {
            if(inpath(head,root))
                return true;
        }
      return isSubPath(head,root->left)||isSubPath(head,root->right);   
    }
};
