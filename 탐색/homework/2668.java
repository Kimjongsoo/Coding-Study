import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.sql.Array;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

public class Main {
    public static boolean[] visited;
    public static int[] arr;
    public static int n, start = 0;
    public static ArrayList<Integer> list = new ArrayList<>();

    public static void dfs(int i) {

        //System.out.println("dfs("+i+") 호출");
        if (arr[i] == start){
            //System.out.println("리스트에 추가:"+start);
            list.add(start);
        }

        if (!visited[arr[i]]) {
            visited[arr[i]] = true;
            dfs(arr[i]);
            visited[arr[i]] = false;
        }
    }


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());

        arr = new int[n + 1];
        visited = new boolean[n + 1];

        for (int i = 1; i <= n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        for (int i = 1; i <= n; i++) {
            visited[i] = true;
            start = i;
            //System.out.println("=============");
            dfs(i);
            visited[i] = false;
        }

        Collections.sort(list);

        System.out.println(list.size());
        for (int x : list) {
            System.out.println(x + " ");
        }

    }
}