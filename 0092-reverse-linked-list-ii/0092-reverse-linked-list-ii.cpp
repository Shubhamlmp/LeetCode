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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int>v;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int l = left-1;
        int r = right-1;
        while(l < r){ 
            int t = v[l];
            v[l] = v[r];
            v[r] = t;
            l++;
            r--;
        }
        temp = head;
        int i = 0;
        while(temp != NULL){
            temp->val = v[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};