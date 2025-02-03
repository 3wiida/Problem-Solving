class Solution {
    public int searchInsert(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;
        int mid = (low + high) / 2;
        while (low <= high) {
            int currentValue = nums[mid];
            if (target == currentValue)
                return mid;
            else if (target < currentValue)
                high = mid - 1;
            else
                low = mid + 1;
            mid = (low + high) / 2;
        }
        return getInsetIndex(nums, mid, target);
    }

    public int getInsetIndex(int[] nums, int currentIndex, int target){
        if(target > nums[currentIndex])
            return currentIndex+1;
        else
            if(currentIndex == 0)
                return 0;
            return currentIndex -1;
    }
}