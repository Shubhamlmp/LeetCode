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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<ListNode*> list;
        while(temp != NULL){
            list.push_back(temp);
            temp = temp->next;
        }
        int n = list.size();
        for(int i = 0; i < n/2; i++){
            list[i]->next = list[n-i-1];
            list[n-i-1]->next = list[i+1];
        }
        list[n/2]->next = NULL;
    }
};