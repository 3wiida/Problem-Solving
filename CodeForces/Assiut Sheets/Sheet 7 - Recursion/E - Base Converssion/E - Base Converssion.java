import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t != 0) {
            long n = sc.nextLong();
            if(n == 0){
                System.out.print(0);
            }else{
                printDigits(n);
            }
            System.out.println();
            t--;
        }
    }

    public static void printDigits(long n) {
        if (n == 0) return;
        printDigits(n / 2);
        System.out.print(n % 2);
    }
}