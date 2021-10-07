#!/bin/bash
echo -n "n = "
read n
if [ $n -lt 0 ]
then
	n=0
fi

echo ""

k=0
l=1
j=1

	for ((i=0 ; i<n+1 ; i++))
	do
		echo "$i : $j"
		j=$(($k+$l))
		k=$l
		l=$j
	done
echo ""