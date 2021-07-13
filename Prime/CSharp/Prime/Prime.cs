using System;

namespace Prime {
    public class Pr {
        public static void Main() {
            int i;
            string[] ans={"Error","Composite number","Prime number"};
            do {
                Console.Write("number : ");
                var line1 = Console.ReadLine().Trim();
                if (int.TryParse(line1, out var n))
                    n = (n < 0 ? 0 : n);
                else
                    n = 0;
                Console.WriteLine("{0}",ans[isPrime(n)+1]);
                Console.WriteLine("");
                Console.Write("Continue? (Yes : 1 / No : 0) : ");
                line1 = Console.ReadLine().Trim();
                if (!int.TryParse(line1, out i))
                    i = 0;
                Console.WriteLine("");
            } while (i != 0);
        }

        static int isPrime(int x) {
            if (x < 2) return -1;
            if (x == 2) return 1;
            if (x % 2 == 0) return 0;
            for (var i = 3; i <= Math.Sqrt(x); i += 2) {
                if (x % i == 0) return 0;
            }
            return 1;
        }
    }
}