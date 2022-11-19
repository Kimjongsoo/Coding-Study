import java.util.Scanner;

public class Main {


    public static void main(String[] args){
        int n = 0;
        int k = 0;
        int ans = 0;

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        k = sc.nextInt();

        while (true) {
            if (n == 1) {
                break;
            } else if (n % k == 0) {
                n /= k;
                ans++;
            } else {
                n--;
                ans++;
            }
        }

        System.out.println(ans);
    }
}
