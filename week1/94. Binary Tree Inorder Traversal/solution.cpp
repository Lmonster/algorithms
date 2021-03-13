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
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) {
            return {};
        }
        std::stack<TreeNode*> ss;
        std::vector<int> vals;
        ss.push(root);
        while (!ss.empty()) {
            while(root && root->left) {
                ss.push(root->left);
                root = root->left;
            }
            root = ss.top();
            vals.push_back(root->val);
            ss.pop();
            if (root->right) {
                ss.push(root->right);
            }
            root = root->right;
        }
        return vals;
    }
};