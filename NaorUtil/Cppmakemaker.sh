#!/bin/bash

gcc -MM *.c > makefile
read -p "Please Enter a Name for your Program:[Press Enter for defult]" progName
if [[ -n $progName ]];then
progName="-o $progName"
fi
progLine="prog: "
progGccLine="	gcc "

OLine=""
OGccLine="	gcc -c "
OItems=""
I_OItems=0

CItems=""
I_CItems=0

while read f;do
	l[0]=`echo $f |cut -d ":" -f 1`
	OItems[$I_CItems]=${l[0]}
	((I_CItems++))
done < makefile
progLine="$progLine${OItems[@]}"
echo $progLine > Makefile
echo "	gcc ${OItems[@]} $progName" >> Makefile
echo "" >> Makefile

while read f;do
	OGccLine="gcc -c "
		echo $f >> Makefile
	l[0]=`echo $f |cut -d ":" -f 2`
	for s in ${l[@]};do
		if [[ $s == *.c ]];then
			OGccLine="$OGccLine$s "
		fi
		
		done
		echo "	$OGccLine" >> Makefile
		echo "" >> Makefile
		
done < makefile

echo "clean:" >> Makefile
echo "	rm *.o" >> Makefile

cat Makefile > makefile
rm Makefile
