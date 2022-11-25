import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

class Test implements Comparable<Test>{
    int a, b;
    public Test(int a, int b){
        this.a = a;
        this.b = b;
    }
    @Override
    public int compareTo(Test o) {
        return this.a - o.a; // 서류 심사 성적으로 오름차순 정렬
    }
}
public class 1946{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());

        while(T-->0){
            int N = Integer.parseInt(br.readLine());
            ArrayList<Test> list = new ArrayList<>();
            for(int i=0; i<N; i++){
                st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                list.add(new Test(a, b));
            }
            Collections.sort(list);

            int highRank = Integer.MAX_VALUE;
            int cnt = 0;
            for(Test t : list){
                if(t.b < highRank) {
                    highRank = t.b;
                    cnt++;
                }
            }
            sb.append(cnt+"\n");
        }
        System.out.println(sb);
    }
}