/*
    Problem Link: https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array&difficulty=EASY
    Difficulty: Easy
    Solved with: Java
    Time Complexity: O(n^2)
 */

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int firstNumIndex = 0, secondNumIndex = 0, sum;
        boolean stopFlag = false;

        for (int i = 0; i < nums.length; i++) {
            firstNumIndex = i;
            for (int j = i + 1; j < nums.length; j++) {
                secondNumIndex = j;
                sum = nums[i] + nums[j];
                if(sum == target){
                    stopFlag = true;
                    break;
                }
            }
            if(stopFlag) break;
        }

        return new int[]{firstNumIndex, secondNumIndex};
    }
}