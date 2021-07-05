#!/bin/sh
if [ $# -eq 0 ]
then
	n=100
else
	n="$1"
fi
if [ $n -lt 0 ]
then
	n=100
fi

echo "n = $n"
echo ""
for ((i=1 ; i<n+1 ; i++))
do
	if [ $((i % 15)) -eq 0 ]
	then
		echo "Fizz Buzz"
	elif [ $((i % 5)) -eq 0 ]
	then
		echo "Buzz"
	elif [ $((i % 3)) -eq 0 ]
	then
		echo "Fizz"
	else
		echo $i
	fi
done
echo ""