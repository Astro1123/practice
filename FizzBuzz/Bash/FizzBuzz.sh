#!/bin/bash
echo -n "n = "
read n
if [ $n -lt 1 ]
then
	n=100
fi

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