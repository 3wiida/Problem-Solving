import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        pyramid(n,n);
    }

    public static void pyramid(int n, int row) {
        if (row == 0) return;
        pyramid(n ,row-1);
        for (int i = 1; i <= n-row; i++) {
            System.out.print(" ");
        }
        for (int i = 0; i < 2*row-1; i++) {
            System.out.print('*');
        }
        System.out.println();

    }
}