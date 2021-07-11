import java.util.Scanner;
public class FizzBuzz {
    public static void main(String[] args ) {
        Scanner sc = new Scanner(System.in);
        System.out.print("n = ");
        String str = sc.nextLine();
        int n;
        try {
        	n = Integer.parseInt(str);
        }
        catch(NumberFormatException e) {
        	n = 100;
        }
        if (n < 1) {
        	n = 100;
        }
        System.out.println("");
        for (int i = 0; i < n; i++) {
        	if ((i+1)%15==0) {
            	System.out.println("FizzBuzz");
        	} else if ((i+1)%5==0) {
            	System.out.println("Buzz");
        	} else if ((i+1)%3==0) {
            	System.out.println("Fizz");
        	} else {
            	System.out.println(i+1);
        	} 
        }
        System.out.println("");
    }
}