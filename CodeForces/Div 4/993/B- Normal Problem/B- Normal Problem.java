import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t > 0) {
            String s = scanner.next();
            StringBuilder sb = new StringBuilder();
            sb.append(s);
            for (int i = 0; i < s.length(); i++) {
                if(s.charAt(i) == 'q') {
                    sb.setCharAt(i,'p');
                }else if(s.charAt(i) == 'p'){
                    sb.setCharAt(i,'q');
                }
            }
            System.out.println(reverseString(sb.toString()));
            t--;
        }
    }
 
    public static String reverseString(String in){
        String result = "";
        for (int i = in.length()-1; i >= 0; i--) {
            result+=in.charAt(i);
        }
        return result;
    }
}