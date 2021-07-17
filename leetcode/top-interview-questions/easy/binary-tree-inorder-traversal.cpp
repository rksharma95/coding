/*
an iterative solution for
inorder traversal of a binary tree

time complexity: O(n)
*/

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> res;
    TreeNode* current = root;
    
    while(current){
        if(!current->left){
            res.push_back(current->val);
            current = current->right;
        }
        else{
            TreeNode* node = current->left;
            while(node->right && node->right != current){
                node = node->right;
            }
            if(node->right){
                node->right = nullptr;
                res.push_back(current->val);
                current = current->right;
            }
            else{
                node->right = current;
                current = current->left;
            }
        }
    }
    return res;
}