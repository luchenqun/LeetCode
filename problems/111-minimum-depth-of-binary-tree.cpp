/*
 * [111] Minimum Depth of Binary Tree
 *
 * https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/description/
 * https://leetcode.com/problems/minimum-depth-of-binary-tree/discuss/
 *
 * algorithms
 * Easy (30.74%)
 * Total Accepted:    1.1K
 * Total Submissions: 3.4K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，找出其最小深度。
 * 最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
 * 说明: 叶子节点是指没有子节点的节点。
 * 示例:
 * 给定二叉树 [3,9,20,null,null,15,7],
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 返回它的最小深度  2.
 */

#include <iostream>
#include <algorithm>

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

class Solution
{
  public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        return (left == 0 || right == 0) ? (left + right + 1) : (min(left, right) + 1);
    }
};

int main()
{
    Solution s;

    return 0;
}
