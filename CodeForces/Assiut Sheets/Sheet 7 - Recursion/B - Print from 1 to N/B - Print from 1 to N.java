import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printNumbers(n);
    }

    public static void printNumbers(int n){
        if(n == 0) return;
        printNumbers(n-1);
        System.out.println(n);
    }
}