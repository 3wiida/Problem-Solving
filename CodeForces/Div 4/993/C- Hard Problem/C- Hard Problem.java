import java.util.Scanner;
 
import static java.lang.Math.abs;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t > 0) {
            int m = scanner.nextInt();
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
 
            int remain = 0;
            int count = 0;
 
            if (a >= m) {
                count += m;
            }else{
                remain+=abs(a-m);
                count+=a;
            }
 
            if (b >= m) {
                count += m;
            }else{
                remain+=abs(b-m);
                count+=b;
            }
 
            count += Math.min(remain, c);
 
            System.out.println(count);
            t--;
        }
    }
 
}