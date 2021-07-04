def f(x):
	return x * x - 2

def fd(x,h):
	return (f(x+h/2)-f(x-h/2))/h

def Newton(x,h):
	return x - f(x)/fd(x,h)

print('x = ', end='')
try:
	x = float(input())
except:
	x = 0
print('eps = ', end='')
try:
	eps = float(input())
except:
	eps = 0.0000000001
if eps >= 1 or eps <= 0:
	eps = 0.0000000001
print('h = ', end='')
try:
	h = float(input())
except:
	h = 0.00001
if h > 1 or h <= 0:
	h = 0.00001;
print('count = ', end='')
try:
	cnt = int(input())
except:
	cnt = 1000
if cnt <= 0:
	cnt = 1000
print('')

for i in range(cnt):
	x = Newton(x,h)
	if abs(f(x)) < eps:
		break

print("x = %f" % x)
print("f(x) = %f\n" % f(x))