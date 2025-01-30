class Solution {
    public boolean isPalindrome(int x) {
        String numString = x + "";
        int j = numString.length() - 1;
        for (int i = 0; i < j; i++) {
            if(numString.charAt(i) != numString.charAt(j)){
                return false;
            }
            j--;
        }
        return true;
    }
}