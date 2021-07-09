def Fibonacci(x)
	return x if x < 2
	return Fibonacci(x-1)+Fibonacci(x-2)
end

print("n = ")
n = gets.chomp.to_i
puts("")
if n < 0 then
	n = 0
end

for i in 0..n
	print(i," : ",Fibonacci(i),"\n")
end
puts("")