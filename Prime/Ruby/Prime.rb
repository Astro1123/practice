def Prime(x)
	return -1 if x < 2
	return 1 if x == 2
	return 0 if x%2 == 0
	3.step(Integer.sqrt(x),2) {|i|
		return 0 if x%i == 0
	}
	return 1
end

def PrintPrime(x)
	return "Error" if x < 0
	return "Composite number" if x == 0
	return "Prime number"
end

loop {
	print("number : ")
	n = gets.chomp.to_i
	if n < 0 then
		n = 0
	end
	puts(PrintPrime(Prime(n)))
	puts("")
	print("Continue? (Yes : 1 / No : 0) : ")
	i = gets.chomp.to_i
	puts("")
	break if i == 0
}