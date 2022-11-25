package 스터디.그리디.숙제;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class hw1_백준_11047 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int n = Integer.parseInt(s[0]);
        long k = Long.parseLong(s[1]);

        int[] coin = new int [n];

        for (int i = 0; i < n; i++) {
            coin[i] = Integer.parseInt(br.readLine());
        }

        int count = 0;
        for (int j = n-1; j >=0; j--) {
            if (coin[j] <= k ) {
                count += k / coin[j]; // 몫 저장
                k = k%coin[j];
            }
        }
        System.out.println(count);
    }
}
