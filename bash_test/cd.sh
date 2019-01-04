echo "erroxxxxx" >&2

a=1
b=2
if [ \( $a -le $b \) -a \( $a -ge $b \) ]; then
   echo "y"
else
   echo "n"
fi
