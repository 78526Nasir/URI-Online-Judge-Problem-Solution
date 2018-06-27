
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        int n = sc.nextInt();
        
        while (n!=0) {            
            
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();

            if(a.compareTo(b)==-1){
                System.out.println("nao encaixa");
            }else{
                String first = a.toString();
                String second = b.toString();
                sb.append(first);

                first = sb.reverse().toString();
                first = first.substring(0, second.length());
                sb.setLength(0);
                sb.append(first);
                first = sb.reverse().toString();

                if(first.compareTo(second)==0){
                    System.out.println("encaixa");
                }else{
                    System.out.println("nao encaixa");
                }
            }
            
            n--;
        }
    }

}
