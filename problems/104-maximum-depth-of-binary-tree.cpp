/*
 * [104] Maximum Depth of Binary Tree
 *
 * https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/description/
 *
 * algorithms
 * Easy (61.28%)
 * Total Accepted:    3.6K
 * Total Submissions: 5.9K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，找出其最大深度。
 * 二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
 * 说明: 叶子节点是指没有子节点的节点。
 * 示例：
 * 给定二叉树 [3,9,20,null,null,15,7]，
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 返回它的最大深度 3 。
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
    int maxDepth(TreeNode *root)
    {
        return root == NULL ? 0 : max(depth(root->left, 1), depth(root->right, 1));
        
        // 或者
        return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }

    int depth(TreeNode *tn, int curDepth)
    {
        if (tn == NULL)
            return curDepth;

        curDepth++;
        return max(depth(tn->left, curDepth), depth(tn->right, curDepth));
    }
};

int main()
{
    Solution s;

    return 0;
}