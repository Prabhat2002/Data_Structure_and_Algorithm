class MyLinkedList 
{
 private:
    class Node
    {
     public:
        int val;
        Node* next;

        Node(int val, Node* next): val(val), next(next){}
        Node(int val): Node(val, NULL){}
    };

    Node* head;

public:
    MyLinkedList() 
    {
        head = NULL;
    }

    int get(int index) 
    {
        Node* cur = head;
        for(int i = 0; i < index && cur; i ++)
            cur = cur->next;

        if(!cur) return -1;
        return cur->val;
    }
    void addAtHead(int val) 
    {
        head = new Node(val, head);
    }
    void addAtTail(int val) 
    {
        if(head == NULL)
            head = new Node(val);
        else{
            Node* pre = head;
            while(pre->next)
                pre = pre->next;
            pre->next = new Node(val);
        }
    }
    void addAtIndex(int index, int val) 
    {
        if(index == 0)
            addAtHead(val);
        else
        {
            Node* pre = head;
            for(int i = 1; i < index && pre; i ++)
                pre = pre->next;

            if(pre)
                pre->next = new Node(val, pre->next);
        }
    }
    void deleteAtIndex(int index) 
    {
        if(index == 0)
        {
            if(head)
            {
                Node* delNode = head;
                head = head->next;
                delete delNode;
            }
        }
        else
        {
            Node* pre = head;
            for(int i = 1; i < index && pre; i ++)
                pre = pre->next;

            if(pre && pre->next){
                Node* delNode = pre->next;
                pre->next = delNode->next;
                delete delNode;
            }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
