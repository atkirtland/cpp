/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums.begin(), nums.end());
    }
private:
    TreeNode* helper(vector<int>::iterator begin, vector<int>::iterator end) {
        if (begin == end) {
            return nullptr;
        }
        vector<int>::iterator iter = std::max_element(begin, end);
        TreeNode* ret = new TreeNode(*iter);
        ret->left = helper(begin, iter);
        ret->right = helper(iter+1, end);
        return ret;
    }
};
