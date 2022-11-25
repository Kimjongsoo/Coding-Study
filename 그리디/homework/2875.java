import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class 2875{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken()); // 여학생 수
        int m = Integer.parseInt(st.nextToken()); // 남학생 수
        int k = Integer.parseInt(st.nextToken()); // 인턴쉽에 참여해야하는 학생 수

        int cnt = 0;
        while(n>=2 && m>=1 && m+n>=3+k){
            n -=2;
            m -=1;
            cnt++;
        }

        System.out.println(cnt);

    }
}