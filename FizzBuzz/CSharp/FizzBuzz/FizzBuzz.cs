﻿using System;

namespace FizzBuzz
{
    public class FB
    {
        public static void Main()
        {
            Console.Write("n = ");
            var line1 = Console.ReadLine().Trim();
            if (int.TryParse(line1, out var n))
                n = (n < 1 ? 100 : n);
            else
                n = 100;
            Console.WriteLine("");
            for (var i = 0; i < n; i++ ) {
                if ((i+1) % 15 == 0) {
                    Console.WriteLine("Fizz Buzz");
                } else if ((i + 1) % 5 == 0) {
                    Console.WriteLine("Buzz");
                } else if ((i + 1) % 3 == 0) {
                    Console.WriteLine("Fizz");
                } else {
                    Console.WriteLine(i+1);
                }
            }
            Console.WriteLine("");
        }
    }
}
