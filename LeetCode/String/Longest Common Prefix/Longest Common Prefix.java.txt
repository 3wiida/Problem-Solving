class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder commonPrefix = new StringBuilder();
        String firstWord = strs[0];
        boolean charDiffFlag = false;
        try{
            for (int i = 0; i < firstWord.length(); i++) {
                for (String word : strs) {
                    if (word.charAt(i) != firstWord.charAt(i)) {
                        charDiffFlag = true;
                        break;
                    }
                }
                if(charDiffFlag) break;
                commonPrefix.append(firstWord.charAt(i));
            }
        }catch (IndexOutOfBoundsException ignored){}
        return commonPrefix.toString();
    }
}