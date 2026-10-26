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
    bool isValidBST(TreeNode* root) {
       bool res = solve(root,LLONG_MIN, LLONG_MAX);
       return res;
    }

    bool solve(TreeNode* root, long long low, long long high){
        if(root == nullptr){
            return true;
        }

        if(root -> val <=low || root->val >=high){
            return false;
        }

        bool l = solve(root->left,low,root -> val);
        bool r = solve(root ->right, root->val,high);

        return l && r;
    }
};