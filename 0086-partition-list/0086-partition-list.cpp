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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        vector<int>srt;
        for(auto num : v){
            if(num < x){
                srt.push_back(num);
            }
        }
        for(auto num : v){
            if(num >= x){
                srt.push_back(num);
            }
        }
        ListNode* newNode = new ListNode();
        ListNode* curr = newNode;
        for(int i = 0; i < srt.size(); i++){
            ListNode* temp = new ListNode(srt[i]);
            newNode->next = temp;
            newNode = newNode->next;
        }
        return curr->next;
    }
};