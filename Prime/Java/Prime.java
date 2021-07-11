import java.util.Scanner;
public class Prime {
	private static int Prime(int x) {
	    if (x < 2) return -1;
	    if (x == 2) return 1;
	    if (x%2 == 0) return 0;
	    for (int i = 3;i <= (int)Math.sqrt(x);i+=2) {
	        if (x % i == 0) return 0;
	    }
	    return 1;
	}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str,output[]={"Error","Composite number","Prime number"};
        int i,n;
        do {
            System.out.print("number : ");
            str = sc.nextLine();
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
            System.out.println(output[Prime(n)+1]);
            System.out.print("Continue? (Yes : 1 / No : 0) : ");
            str = sc.nextLine();
            try {
        	    i = Integer.parseInt(str);
            }
            catch(NumberFormatException e) {
        	    i = 0;
            }
            System.out.println("");
        } while (i != 0);
    }
}