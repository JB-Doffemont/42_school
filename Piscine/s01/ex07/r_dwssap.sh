cat /etc/passwd | sed '/^#/d' | awk -F: 'NR % 2 == 0 {print $1}' | sort -r | rev | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' |sed 's/,/, /g' | sed 's/, $/\./' | tr -d '\n'
