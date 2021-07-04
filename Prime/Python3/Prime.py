import math

def isPrime(x):
	if x < 2:
		return -1
	elif x == 2:
		return 1
	elif x%2 == 0:
		return 0
	else:
		for i in range(3,int(math.sqrt(x)+1),2):
			if x % i == 0:
				return 0
	return 1

l = ['Error','Composite number','Prime number']

while True:
	print('number : ', end='')
	try:
		n = int(input())
	except:
		n = 0
	if n < 0:
		n = 0
	print(l[isPrime(n)+1])
	print('')
	print('Continue? (Yes : 1 / No : 0) : ', end='')
	try:
		i = int(input())
	except:
		i = 0
	print('')
	if i == 0:
		break
