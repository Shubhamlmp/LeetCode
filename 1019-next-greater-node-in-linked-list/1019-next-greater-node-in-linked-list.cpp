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
private:
    int find(ListNode* temp){
        int num = temp->val;
        temp = temp->next;
        while(temp != NULL){
            if(temp->val > num){
                return temp->val;
            }
            temp = temp->next;
        }
        return 0;
    }
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp != NULL){
            int num = find(temp);
            ans.push_back(num);
            temp = temp->next;
        }
        return ans;
    }
};