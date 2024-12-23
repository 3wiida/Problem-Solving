import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long max = log2(n);
        System.out.println(max);
    }

    public static long log2(long n) {
        if (n / 2 == 0) return 0;
        if (n / 2 == 1) return 1;
        return 1+ log2(n/2);
    }
}