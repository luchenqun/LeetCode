/*
 * [112] Path Sum
 *
 * https://leetcode-cn.com/problems/path-sum/description/
 * https://leetcode.com/problems/path-sum/discuss/
 *
 * algorithms
 * Easy (37.22%)
 * Total Accepted:    1.3K
 * Total Submissions: 3.4K
 * Testcase Example:  '[5,4,8,11,null,13,4,7,2,null,null,null,1]\n22'
 *
 * 给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。
 * 说明: 叶子节点是指没有子节点的节点。
 * 示例: 
 * 给定如下二叉树，以及目标和 sum = 22，
 * ⁠             5
 * ⁠            / \
 * ⁠           4   8
 * ⁠          /   / \
 * ⁠         11  13  4
 * ⁠        /  \      \
 * ⁠       7    2      1
 * 返回 true, 因为存在目标和为 22 的根节点到叶子节点的路径 5->4->11->2。
 */

#include <iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// × Wrong Answer
// × 104/114 cases passed (N/A)
// × testcase: '[1,2,null,3,null,4,null,5]\n6'
// × answer: true
// × expected_answer: false

class Solution
{
  public:
    bool hasPathSum(TreeNode *root, int sum)
    {
        if (root == NULL)
            return false;
        if (root->left == NULL && root->right == NULL && root->val == sum)
            return true;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};

int main()
{
    Solution s;

    return 0;
}
