class Solution 
{
 public:
    Node* connect(Node* root) 
    {
       if(root==NULL) 
           return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();  
            for(int i=0;i<size;i++)
            {
                 Node* item = q.front(); 
                if(size-1==i)
                     item->next=NULL; 
                q.pop();
                
                if(size-1!=i) 
                     item->next=q.front(); 
                if(item->left!=NULL)
                    q.push(item->left);
                if(item->right!=NULL)
                    q.push(item->right);
            }
        } 
        return root; 
    }
};
