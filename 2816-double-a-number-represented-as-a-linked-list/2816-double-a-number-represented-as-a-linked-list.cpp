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
    ListNode* doubleIt(ListNode* head) {
        vector<int>num;
        while(head != NULL){
            num.push_back(head->val);
            head = head->next;
        }
        stack<int>st;
        int carry = 0;
        for(int i = num.size()-1; i >= 0; i--){
            int temp = num[i]*2;
            temp += carry;
            carry = 0;
            if(temp > 9){
                carry = temp/10;
                temp %= 10; 
            }
            st.push(temp);
        }
        if(carry > 0){
            st.push(carry);
        }
        ListNode* newNode = new ListNode();
        ListNode* curr = newNode;
        while(!st.empty()){
            ListNode* nxt = new ListNode(st.top());
            curr->next = nxt;
            curr = curr->next;
            st.pop();
        }
        return newNode->next;
    }
};