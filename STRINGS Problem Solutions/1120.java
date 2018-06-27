import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger bi;
        
        while(true){
            int n = sc.nextInt();
            bi = sc.nextBigInteger();
            if(n==0 && bi.compareTo(new BigInteger("0")) ==0){
                System.exit(0);
            }
            
            String first = Integer.toString(n);
            String second = bi.toString();
            second = second.replace(first, "");
            
            if(second.equals(""))
                System.out.println("0");
            else {
                System.out.println(new BigInteger(second));
            }
        }
    }

}