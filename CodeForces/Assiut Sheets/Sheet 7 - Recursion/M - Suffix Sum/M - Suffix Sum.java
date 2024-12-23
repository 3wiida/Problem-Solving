import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        long max = getSum(arr, n, m, 0);
        System.out.println(max);
    }

    public static long getSum(int[] arr, int n, int m, int i) {
        if (i == m) return 0;
        return arr[n-i-1] + getSum(arr,n,m,i+1);
    }
}