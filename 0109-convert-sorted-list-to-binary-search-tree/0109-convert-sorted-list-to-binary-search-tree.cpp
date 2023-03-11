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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>nums;
    void listToVector(ListNode* head) {
        ListNode* temp = head;
        while(temp != NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }
    }
    TreeNode* HelperBST(vector<int>& nums, int left, int right) {
       if(left > right){
            return NULL;
        }
        int mid = (left+right)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = HelperBST(nums, left, mid-1);
        root->right = HelperBST(nums, mid+1, right);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) {
            return NULL;
        }
        listToVector(head);
        return HelperBST(nums, 0, nums.size()-1);
    }
};