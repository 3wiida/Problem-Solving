import java.util.Scanner;

import static java.lang.Math.max;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int max = getMax(arr,n,0);
        System.out.println(max);
    }

    public static int getMax(int[] arr,int n, int i){
        if(i == n) return Integer.MIN_VALUE;
        return max(arr[i], getMax(arr,n,i+1));
    }
}