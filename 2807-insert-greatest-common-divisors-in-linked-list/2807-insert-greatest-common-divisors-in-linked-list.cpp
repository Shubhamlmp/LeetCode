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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int>vec;
        ListNode* temp = head;
        while(temp){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        vector<int>ans;
        for(int i = 0; i < vec.size()-1; i++){
            int a = vec[i];
            int b = vec[i+1];
            int gcd = __gcd(a,b);
            ans.push_back(a);
            ans.push_back(gcd);
        }
        ans.push_back(vec[vec.size()-1]);
        ListNode* newNode = new ListNode();
        ListNode* curr = newNode;
        for(auto x : ans){
            ListNode* temp = new ListNode(x);
            newNode->next = temp;
            newNode = newNode->next;
        }
        return curr->next;
    }
};