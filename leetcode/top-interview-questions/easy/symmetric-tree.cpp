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

/*
time complexity: O(n)
space complexity: recursive call stack space O(n) 
*/
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
    
    bool isMirror(TreeNode* t1, TreeNode* t2){
        if(!t1 && !t2) return true;
        if(t1 && t2){
                    return t1->val == t2->val
                    && isMirror(t1->left, t2->right)
                    && isMirror(t1->right, t2->left);
        }
        
        return false;
    }
};