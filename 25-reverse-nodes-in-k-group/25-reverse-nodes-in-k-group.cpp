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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 0 || k == 1){
            return head;
        }
        
        ListNode* cur = head;
        for(int i=0;i<k;i++)
        {
            if(cur==NULL) return head;
            cur = cur->next;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd;
        
        int count = 0;
        while(count < k && curr != NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            count++;
        }
        
        if(fwd != NULL){
            head->next = reverseKGroup(fwd, k);
        }
        
        return prev;
    }
};