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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        find(root,result,1);
        return result;
    }
    
    void find(TreeNode* root,vector<int>& result,int level)
    {
        if(!root) return;
        if(result.size() <level) result.push_back(root->val);
        find(root->right,result,level+1);
        find(root->left,result,level+1);
    }
};
