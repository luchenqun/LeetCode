/*
 * [289] Game of Life
 *
 * https://leetcode-cn.com/problems/game-of-life/description/
 * https://leetcode.com/problems/game-of-life/discuss/
 *
 * algorithms
 * Medium (33.13%)
 * Total Accepted:    110
 * Total Submissions: 340
 * Testcase Example:  '[[]]'
 *
 * 根据百度百科，生命游戏，简称为生命，是英国数学家约翰·何顿·康威在1970年发明的细胞自动机。
 * 给定一个包含 m × n 个格子的面板，每一个格子都可以看成是一个细胞。每个细胞具有一个初始状态 live（1）即为活细胞， 或
 * dead（0）即为死细胞。每个细胞与其八个相邻位置（水平，垂直，对角线）的细胞都遵循以下四条生存定律：
 * 1. 如果活细胞周围八个位置的活细胞数少于两个，则该位置活细胞死亡；
 * 2. 如果活细胞周围八个位置有两个或三个活细胞，则该位置活细胞仍然存活；
 * 3. 如果活细胞周围八个位置有超过三个活细胞，则该位置活细胞死亡；
 * 4. 如果死细胞周围正好有三个活细胞，则该位置死细胞复活；
 * 根据当前状态，写一个函数来计算面板上细胞的下一个（一次更新后的）状态。
 * 进阶:
 * 你可以使用原地算法解题吗？请记住，面板上所有格子需要同时被更新：你不能先更新某些格子，然后使用它们的更新后的值更新其他格子。
 * 在此题中，我们使用二维数组来表示面板。原则上，面板是无限的，但当活细胞侵占了面板边界时会造成问题。你将如何解决这些问题？
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
