import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long max = fibonacci(n);
        System.out.println(max);
    }

    public static long fibonacci(int n) {
        if(n == 1) return 0;
        if(n == 2) return 1;
        return fibonacci(n-1) + fibonacci(n-2);
    }
}