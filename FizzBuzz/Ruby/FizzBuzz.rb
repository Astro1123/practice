print("n = ")
n=gets.chomp.to_i
puts("")
for i in 1..n
	if i % 15 == 0 then
		print("FizzBuzz\n")
	elsif i % 5 == 0 then
		print("Buzz\n")
	elsif i % 3 == 0 then
		print("Fizz\n")
	else
		print(i,"\n")
	end
end
puts("")