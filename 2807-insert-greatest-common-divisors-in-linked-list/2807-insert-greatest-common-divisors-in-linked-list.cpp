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
    int gcd(int a , int b){
        return __gcd(a,b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr->next){
            ListNode* next = curr->next;
            ListNode* temp = new ListNode(gcd(curr->val, next->val));
            curr->next = temp;
            temp->next = next;
            curr = curr->next->next;
        }
        return head;
    }
};