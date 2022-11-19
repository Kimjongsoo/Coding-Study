import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

// 16 ->  4 -> 4
public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        int[] coins = {500, 100, 50, 10};
            // 2, 3, 1, 1
        int cnt = 0;


        for(int coin: coins){
            cnt += n / coin;
            n %= coin;
        }
        System.out.println(cnt);
    }
}