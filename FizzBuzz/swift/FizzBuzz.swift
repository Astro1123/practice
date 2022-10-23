func unwrap(_ value: Int?) -> Int {
	return value != nil ? value! : 0
}
func unwrap(_ value: String?) -> String {
	return value != nil ? value! : ""
}

print("n = ", terminator: "")
let str = unwrap(readLine())
let n = unwrap(Int(str)) < 1 ? 100 : unwrap(Int(str))
print("")

for i in 1...n {
	if i % 15 == 0 {
		print("Fizz Buzz")
	} else if i % 5 == 0 {
		print("Buzz")
	} else if i % 3 == 0 {
		print("Fizz")
	} else {
		print(i)
	}
}
print("")