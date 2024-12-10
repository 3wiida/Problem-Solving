/*
 *   Problem Link: https://leetcode.com/problems/remove-element/?envType=problem-list-v2&envId=array&difficulty=EASY
 *   Difficulty : Easy
 *   Solved With: Java
 *   Time Complexity: O(n)
 */

import java.util.ArrayList;

class Solution {
    public int removeElement(int[] nums, int val) {
        ArrayList<Integer> nonValElements = new ArrayList<>();
        for (int num : nums) {
            if (num != val) nonValElements.add(num);
        }
        for (int i = 0; i < nonValElements.size(); i++) {
            nums[i] = nonValElements.get(i);
        }
        return nonValElements.size();
    }
}