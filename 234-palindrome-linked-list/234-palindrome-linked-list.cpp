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
        vector<ListNode*> ans;
        while(head != NULL)
        {
            ans.push_back(head);
            head = head->next;
        }
        int n = ans.size()-1;
        for(int i =  0; i < (ans.size())/2; i++)
        {
            if(ans[i]->val != ans[n]->val){
                return false;
            }
            n--;
        }
        return true;
        // ListNode* temp = head;
        // int count  = 0;
        // while(temp->next != NULL){
        //     temp = temp->next;
        //     count++;
        // }
        // while(count){
        //     if(head->val != temp->val){
        //         return false;
        //         head-
        //     }
        //     count--;
        // }
        // return true;
    }
};