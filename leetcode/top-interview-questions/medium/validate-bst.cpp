/*
 the solution is based on recursion
 time complexity: O(n)
 space complexity: stack space ~ height of the BST ~ O(n) in worst case
 */
class Solution{
public:
	bool isValidBST(TreeNode* root){
		return isBST(root, LONG_MIN, LONG_MAX);
	}
	bool isBST(TreeNode* node, long min, long max){

		if(node==nullptr){
			return true;
		}

		if(node->val < max && node->val > min){
			return true && 
					isBST(node->left, min, node->val) && 
					isBST(node->right, int->val, max);
		}

		return false;
	}
};
