/*
 * [341] Flatten Nested List Iterator
 *
 * https://leetcode-cn.com/problems/flatten-nested-list-iterator/description/
 * https://leetcode.com/problems/flatten-nested-list-iterator/discuss/
 *
 * algorithms
 * Medium (36.50%)
 * Total Accepted:    50
 * Total Submissions: 137
 * Testcase Example:  '[[1,1],2,[1,1]]'
 *
 * 给出一个嵌套的整型列表。设计一个迭代器，遍历这个整型列表中的所有整数。
 * 列表中的项或者为一个整数，或者是另一个列表。
 * 示例 1:
 * 给定列表 [[1,1],2,[1,1]],
 * 通过重复调用 next 直到 hasNext 返回false，next 返回的元素的顺序应该是: [1,1,2,1,1].
 * 示例 2:
 * 给定列表 [1,[4,[6]]],
 * 通过重复调用 next 直到 hasNext 返回false，next 返回的元素的顺序应该是: [1,4,6].
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        
    }

    int next() {
        
    }

    bool hasNext() {
        
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */

int main()
{
    Solution s;

    return 0;
}
        
