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
 * 
 * a recursive solution to convert a given sorted array to binary search tree
 * time complexity: O(n)
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int mid = 0 + nums.size()/2;
        return arrayToBST(nums, 0, mid, nums.size()-1);
        
    }
    
    TreeNode* arrayToBST(vector<int> a,int l, int mid, int r){
        TreeNode* root = NULL;
        
        root = new TreeNode(a[mid]);
        if(l==r){
            return root;
        }
        if(mid-2>=l){
            root->left = arrayToBST(a, l, (l+mid)/2, mid-1);
        }else if(mid-1>=l){
            root->left = new TreeNode(a[mid-1]);
        }

        if(mid+2<=r){
            root->right = arrayToBST(a, mid+1, (mid+1+r)/2, r);
        }
        else if(mid+1<=r){
            root->right = new TreeNode(a[mid+1]);
        }

    return root;

    }
};