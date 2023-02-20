echo "Please enter the number of loops"
read LOOPS

for (( i=1; i<=$LOOPS; i++ ))
do
	echo "$i $RANDOM" >> file.txt
done

