import java.util.Scanner;
public class Fibonacci {
	private static int Fibonacci(int x) {
	    return (x<2 ? x : Fibonacci(x-1)+Fibonacci(x-2));
	}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("n = ");
        String str = sc.nextLine();
        int n;
        try {
        	n = Integer.parseInt(str);
        }
        catch(NumberFormatException e) {
        	n = 0;
        }
        if (n < 0) {
        	n = 0;
        }
        System.out.println("");
        for (int i = 0; i < n+1; i++) {
            System.out.println(String.valueOf(i)+" : "+String.valueOf(Fibonacci(i)));
        }
        System.out.println("");
    }
}