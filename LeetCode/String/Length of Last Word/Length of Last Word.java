class Solution {
    public int lengthOfLastWord(String s) {
        String trimmedString = s.trim();
        String[] words = trimmedString.split(" ");
        String lastWord = words[words.length-1];
        return lastWord.length();
    }
}