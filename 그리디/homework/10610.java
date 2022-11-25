import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class 10610{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        StringBuilder sb = new StringBuilder();

        char[] arr = str.toCharArray();

        Arrays.sort(arr);

        int sum = 0;
        for(int i=str.length()-1; i>=0; i--){
            int num = arr[i]-'0';
            sum+=num;
            sb.append(num);
        }

        if(sum % 3 != 0 || arr[0]-'0'!= 0){
            System.out.println(-1);
        }else System.out.println(sb);




    }
}