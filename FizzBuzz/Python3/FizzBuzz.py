print('n = ', end = '')
try:
	n = int(input())
except:
		n = 100
if n < 1:
	n = 100
print('')
for i in range(n):
	if (i+1)%15 == 0:
		print('Fizz Buzz')
	elif (i+1)%5 == 0:
		print('Buzz')
	elif (i+1)%3 == 0:
		print('Fizz')
	else:
		print(i+1)
print('')