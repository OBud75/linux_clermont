y=0
for i in `seq $1`; do
	y=$((y+1))
	for j in `seq $y`; do
		echo -n "*"
	done
echo " "
done
