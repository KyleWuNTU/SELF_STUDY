#!/usr/bin/env bash

declare -a array=("apple" "pear" "cherry") #-a means array

for i in "${array[@]}"
do
	echo "This ${i} is delicious!"
done
