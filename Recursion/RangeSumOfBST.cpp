/*
@author : Adarsh Patel
@email : patel.adarsh@outlook.com
This sollution is brute force solution to the problem.
Time Complexity : O(logH) (H : Height of Tree)
Space Compleity : O(1);
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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==NULL) return 0;
        if(root->val > R) {
            return rangeSumBST(root->left, L, R);
        }
        if(root->val < L) {
            return rangeSumBST(root->right, L, R);
        }
        int leftSum = rangeSumBST(root->left, L, R);
        int rightSum = rangeSumBST(root->right, L, R);
        return root->val + leftSum + rightSum;
    }
};
