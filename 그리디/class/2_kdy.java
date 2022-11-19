import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        int cnt = 0;

        // n이 1될 때까지 k로 나누기, 아니면 1로 빼기

      
        while(true){
            if(n % k == 0) n /= k;
            else n--;

            cnt++;
            if(n==1) break;
        }
        System.out.println(cnt);

    }
}