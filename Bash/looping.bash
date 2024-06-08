fix=2
for ((i = 1; i <= 99; i++)) 
do
    if [ $((i%fix)) -eq 1 ] 
    then
        echo "Number: $i"
    fi
done