using System;

namespace Fibonacci {
    public class Fib {
        public static void Main() {
            Console.Write("n = ");
            var line1 = Console.ReadLine().Trim();
            if (int.TryParse(line1, out var n))
                n = (n < 0 ? 0 : n);
            else
                n = 0;
            Console.WriteLine("");
            for (var i = 0; i <= n; i++) {
                Console.WriteLine("{0} : {1}",i,Fibonacci(i));
            }
            Console.WriteLine("");
        }

        static int Fibonacci(int x) {
            return (x < 2 ? x : Fibonacci(x - 1) + Fibonacci(x - 2));
        }
    }
}