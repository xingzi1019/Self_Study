import java.util.Scanner;

public class G1701 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] d = new int[n];
        for (int i = 0; i < n; i++) {
            d[i] = sc.nextInt();
        }
        long ans = d[0];
        for (int i = 1; i < n; i++) {
            if (d[i] > d[i-1]) {
                ans += d[i] - d[i-1];
            }
        }
        System.out.println(ans);
        sc.close();
    }
}
