package 스터디.그리디.숙제;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class hw2_백준_2875 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int n = Integer.parseInt(s[0]);
        int m = Integer.parseInt(s[1]);
        int k = Integer.parseInt(s[2]);

        int cnt = 0;

        while(n>=2 && m>=1 && n+m>=3+k) {
            n -=2;
            m--;
            cnt ++;
        }
        System.out.println(cnt);
    }
}
