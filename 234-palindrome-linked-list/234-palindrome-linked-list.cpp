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
    bool isPalindrome(ListNode* head) {
        
       ListNode* fast = head;
       ListNode* slow = head;
        
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
       ListNode* mid = slow;
       ListNode* prev = NULL;
       ListNode* next = NULL;
        
        while(mid != NULL){
            next = mid->next;
            mid->next = prev;
            prev = mid;
            mid = next;
        }
        
       ListNode* tail = prev;
        while(head != NULL && tail != NULL && tail != head){
            if(head->val != tail->val){
                return false;
            }
            head = head->next;
            tail = tail->next;
        }
        return true;
    }
};