import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        long max = getSum(arr,n,0);
        System.out.println(max);
    }

    public static long getSum(int[] arr,int n, int i){
        if(i == n) return 0;
        return arr[i] + getSum(arr,n,i+1);
    }
}