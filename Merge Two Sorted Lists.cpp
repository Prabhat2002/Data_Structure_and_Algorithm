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
    ListNode* mergeTwoLists(ListNode* headA, ListNode* headB) 
    {
        
    if (headA == NULL && headB == NULL) {
        return NULL;
    }

    if (headA == NULL) {
        return headB;
    }

    if (headB == NULL) {
        return headA;
    }

    // Ensure that list A starts with the smaller number
    if (headA->val > headB->val) {
        ListNode *tmp = headB;
        headB = headA;
        headA = tmp;
    }

    ListNode *listHead = headA;

    while (headB) {
        // Advance through nodes in list A until the next node
        // has data bigger than data at current node of list B
        while (headA->next != NULL &&
               headB->val > headA->next->val) {
            headA = headA->next;
        }

        // Insert current node in list B into list A
        ListNode* nextB = headB->next;
        headB->next = headA->next;
        headA->next = headB;
        headB = nextB;
    }

    return listHead; 
    }
};
