
/*
    * Solution No: 1168
*/
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        int[] arr = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        
        int n, total = 0;
        
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        while (n != 0) {
            String strNum = sc.next();

            for (int i = 0; i < strNum.length(); i++){
                char c = strNum.charAt(i);        
                
                if (c == '1') {
                    total += 2;
                } else if (c == '2') {
                    total += 5;
                } else if (c == '3') {
                    total += 5;
                } else if (c == '4') {
                    total += 4;
                } else if (c == '5') {
                    total += 5;
                } else if (c == '6') {
                    total += 6;
                } else if (c == '7') {
                    total += 3;
                } else if (c == '8') {
                    total += 7;
                } else if (c == '9') {
                    total += 6;
                } else if (c == '0') {
                    total += 6;
                }
            }
            n--;
            
            System.out.println(total +" leds");
            total = 0;
        }

    }

}
