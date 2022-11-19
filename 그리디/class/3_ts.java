import java.util.Scanner;

public class Main {


    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine(); // 숫자 입력 받기

        int input = str.charAt(0) - '0'; // 자릿수 숫자 확인

        for(int i=0; i<str.length(); i++){
            int num = str.charAt(i)-'0';
            if(num<=1 || input<=1){
                input += num;
            } else{
                input *= num;
            }
        }
        System.out.println(input);
    }
}
