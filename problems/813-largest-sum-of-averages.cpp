/*
 * [831] Largest Sum of Averages
 *
 * https://leetcode-cn.com/problems/largest-sum-of-averages/description/
 * https://leetcode.com/problems/largest-sum-of-averages/discuss/
 *
 * algorithms
 * Medium (23.44%)
 * Total Accepted:    49
 * Total Submissions: 209
 * Testcase Example:  '[9,1,2,3,9]\n3'
 *
 * 我们将给定的数组 A 分成 K 个相邻的非空子数组 ，我们的分数由每个子数组内的平均值的总和构成。计算我们所能得到的最大分数是多少。
 * 注意我们必须使用 A 数组中的每一个数进行分组，并且分数不一定需要是整数。
 * 示例:
 * 输入: 
 * A = [9,1,2,3,9]
 * K = 3
 * 输出: 20
 * 解释: 
 * A 的最优分组是[9], [1, 2, 3], [9]. 得到的分数是 9 + (1 + 2 + 3) / 3 + 9 = 20.
 * 我们也可以把 A 分成[9, 1], [2], [3, 9].
 * 这样的分组得到的分数为 5 + 2 + 6 = 13, 但不是最大值.
 * 说明: 
 * 1 <= A.length <= 100.
 * 1 <= A[i] <= 10000.
 * 1 <= K <= A.length.
 * 答案误差在 10^-6 内被视为是正确的。
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    double largestSumOfAverages(vector<int>& A, int K) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
