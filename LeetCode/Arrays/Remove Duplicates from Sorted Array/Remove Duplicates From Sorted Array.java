/*
    Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=array&difficulty=EASY
    Difficulty: Easy
    Solved with: Java
    Time Complexity: O(n)
 */

public class Solution {
    public int removeDuplicates(int[] nums) {
        int replaceIndex = 1;
        int uniqueNumCount = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i-1]) {
                nums[replaceIndex] = nums[i];
                uniqueNumCount++;
                replaceIndex++;
            }
        }
        return uniqueNumCount;
    }
}