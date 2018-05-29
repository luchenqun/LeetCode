/*
 * [173] Binary Search Tree Iterator
 *
 * https://leetcode-cn.com/problems/binary-search-tree-iterator/description/
 * https://leetcode.com/problems/binary-search-tree-iterator/discuss/
 *
 * algorithms
 * Medium (47.68%)
 * Total Accepted:    227
 * Total Submissions: 475
 * Testcase Example:  '[]'
 *
 * 实现一个二叉搜索树迭代器。你将使用二叉搜索树的根节点初始化迭代器。
 * 调用 next() 将返回二叉搜索树中的下一个最小的数。
 * 注意: next() 和hasNext() 操作的时间复杂度是O(1)，并使用 O(h) 内存，其中 h 是树的高度。
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        
    }

    /** @return the next smallest number */
    int next() {
        
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

int main()
{
    Solution s;

    return 0;
}
        
