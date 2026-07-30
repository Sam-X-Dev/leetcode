/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s = head;
        ListNode *f = head;
        
        while (f != NULL && f->next != NULL) {
            s = s->next;       // Moves 1 step
            f = f->next->next; // Moves 2 steps
            
            if (s == f) {
                return true;   // Fast pointer caught up to slow pointer (cycle detected)
            }
        }
        
        return false;
    }
};