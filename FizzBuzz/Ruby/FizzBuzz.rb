print("n = ")
n=gets.chomp.to_i
puts("")
if n < 0 then
	n = 100
end
for i in 0...n
	if (i+1) % 15 == 0 then
		print("FizzBuzz\n")
	elsif (i+1) % 5 == 0 then
		print("Buzz\n")
	elsif (i+1) % 3 == 0 then
		print("Fizz\n")
	else
		print((i+1),"\n")
	end
end
puts("")