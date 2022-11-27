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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int>v;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size()-1;
        vector<int>v1;
        int maxx = v[n];
        v1.push_back(maxx);
        for(int i = n-1; i >= 0; i--){
            if(v[i] >= maxx){
                v1.push_back(v[i]);
                maxx = v[i];
            }
        }
        ListNode* ans = new ListNode(0);
        temp = ans;
        for(int i = v1.size()-1; i >= 0; i--){
            temp->next = new ListNode(v1[i]);
            temp = temp->next;
        }
        return ans->next;
    }
};