import random

def Swap(intlist,a,b):
	buf = intlist[a]
	intlist[a]=intlist[b]
	intlist[b]=buf
	return

def Shuffle(intlist,n):
	for i in intlist:
		j = n - i + 1
		k = random.randrange(n) % j
		Swap(intlist,j-1,k)
		
def QSort(intlist,left,right):
	i = left
	j = right
	pivot = intlist[left]
	while True:
		while intlist[i] < pivot:
			i+=1
		while pivot < intlist[j]:
			j-=1
		if i >= j:
			break
		Swap(intlist,i,j)
		i+=1
		j-=1
	if left < i-1:
		QSort(intlist, left, i-1)
	if j+1 < right:
		QSort(intlist, j+1, right)

print('n = ', end = '')
try:
	n = int(input())
except:
	n = 0
if n < 10:
	n = 10
print('')
intlist = list(range(n))
for i in intlist:
	intlist[i]=i+1
Shuffle(intlist,n)
print(intlist)
QSort(intlist,0,n-1)
print(intlist)
print('')

#for i in range(n):
#	if (i+1)%15 == 0:
#		print('Fizz Buzz')
#	elif (i+1)%5 == 0:
#		print('Buzz')
#	elif (i+1)%3 == 0:
#		print('Fizz')
#	else:
#		print(i+1)
#print('')