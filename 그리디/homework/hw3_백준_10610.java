package 스터디.그리디.숙제;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

import java.util.Collections;
import java.util.List;

// 3과 10의 공배수 찾기
// 1. 무조건 0이 있어야함 2. 각 자리수의 합이 3의 배수
// 가장 큰수. -> 끝자리 0
public class hw3_백준_10610 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String n = br.readLine();
        List<Integer> list = new ArrayList<>();
        int sum = 0;

        for(int i=0; i<n.length(); i++) {
            sum += n.charAt(i)-'0';
            list.add(n.charAt(i)-'0');
        }

        Collections.sort(list); // 0을 찾기 위한 정렬

        if(list.get(0)==0 && sum%3 ==0) { // 위 조건 만족시 내림차순 정렬
            for(int i=list.size() - 1; i >= 0; i--) {
                System.out.print(list.get(i));
            }
        }
        else System.out.println("-1");
    }
}
