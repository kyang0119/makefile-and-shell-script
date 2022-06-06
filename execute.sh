make
s=$1
echo "${1}"
./cal.exe "cal.in" | tee cal.outs
./cal.exe "cal.in" | fgrep $s