import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int count = countVowels(s.toLowerCase(),0);
        System.out.println(count);
    }

    public static int countVowels(String s, int i){
        if(i == s.length()) return 0;
        if(s.charAt(i) == 'a'|| s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u'){
            return 1+countVowels(s,i+1);
        }
        return countVowels(s,i+1);
    }

}