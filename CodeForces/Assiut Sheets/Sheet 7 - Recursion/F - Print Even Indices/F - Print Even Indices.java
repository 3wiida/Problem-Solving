import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        printEvenIndices(arr, n, 0);
    }

    public static void printEvenIndices(int[] arr, int n, int i) {
        if(i >= n) return;
        printEvenIndices(arr,n,i+2);
        System.out.print(arr[i]+" ");
    }
}