FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | cut -d ':' -f 1 | sed -n 2~2p | rev | sort -r | sed -n ''$FT_LINE1','$FT_LINE2'p'\ | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
