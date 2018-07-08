
/*
 * Solution No: 1050
 */
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int number;

        Scanner sc = new Scanner(System.in);
        number = sc.nextInt();

        if (number == 61) {
            System.out.println("Brasilia");
        }
        else if (number == 71) {
            System.out.println("Salvador");
        }
        else if (number == 11) {
            System.out.println("Sao Paulo");
        }
        else if (number == 21) {
            System.out.println("Rio de Janeiro");
        }
        else if (number == 32) {
            System.out.println("Juiz de Fora");
        }
        else if (number == 19) {
            System.out.println("Campinas");
        }
        else if (number == 27) {
            System.out.println("Vitoria");
        }
        else if (number == 31) {
            System.out.println("Belo Horizonte");
        } else {
            System.out.println("DDD nao cadastrado");
        }

    }

}
