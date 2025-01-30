class Solution {
    public boolean isValid(String s) {
        Stack<Character> parenthesesStack = new Stack<>();
        for(char ch: s.toCharArray()){
            if(ch == '(' || ch == '[' || ch == '{'){
                parenthesesStack.push(ch);
            }else{
                if(parenthesesStack.isEmpty()) return false;
                char stackTop = parenthesesStack.peek();
                switch (ch){
                    case ')':
                        if(stackTop != '(') return false; else parenthesesStack.pop();
                        break;
                    case ']':
                        if(stackTop != '[') return false; else parenthesesStack.pop();
                        break;
                    case '}':
                        if(stackTop != '{') return false; else parenthesesStack.pop();
                        break;
                }
            }
        }
        return parenthesesStack.isEmpty();
    }
}