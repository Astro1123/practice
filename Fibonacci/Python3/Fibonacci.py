def Fibonacci(x):
	return x if x < 2 else Fibonacci(x-2) + Fibonacci(x-1)
	
print('n = ', end='')
try:
	n = int(input())
except:
		n = 0
if n<0:
	n=0
print('')
for i in range(n+1):
	print('%d : %d' % (i, Fibonacci(i)))

print('')