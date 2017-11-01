/*
561. Array Partition I

Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

Example 1:
Input: [1,4,3,2]

Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
Note:
n is a positive integer, which is in the range of [1, 10000].
All the integers in the array will be in the range of [-10000, 10000].

*/

/**
 * @param {number[]} nums
 * @return {number}
 */
var arrayPairSum = function(nums) {
    var total = nums.sort((a, b) => a - b).reduce((sum, value, index) => sum += (index % 2) ? 0 : value, 0);
    return total;
};

var expect = require('chai').expect;
var tests = [
    {nums: [1,4,3,2], expected: 4 },
];
tests.forEach(function (test, index) {
    it('Case ' + (index + 1), function () {
        expect(arrayPairSum(test.nums)).to.deep.equal(test.expected);
    });
});