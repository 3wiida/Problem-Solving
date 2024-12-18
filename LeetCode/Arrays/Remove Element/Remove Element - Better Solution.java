/*
 *   Problem Link: https://leetcode.com/problems/remove-element/?envType=problem-list-v2&envId=array&difficulty=EASY
 *   Difficulty : Easy
 *   Solved With: Java
 *   Time Complexity: O(n)
 *   Space Complexity: O(0)
 */

class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
}