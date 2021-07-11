import random

def Swap(intlist,a,b):
	buf = intlist[a]
	intlist[a]=intlist[b]
	intlist[b]=buf
	return

def Shuffle(intlist,n):
	for i in intlist:
		j = n - i
		k = random.randrange(n) % (j+1)
		Swap(intlist,j,k)
		
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
	n = 10
if n < 10:
	n = 10
print('')
intlist = list(range(n))
for i in intlist:
	intlist[i]=i+1

print('Initialize : ')
print(intlist)
print('')
Shuffle(intlist,n)
print('Shuffle : ')
print(intlist)
print('')
QSort(intlist,0,n-1)
print('Sort : ')
print(intlist)
print('')