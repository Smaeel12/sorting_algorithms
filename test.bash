read -p "betty activate: " betty_activate
if [[ "$betty_activate" =~ [Yy] ]]; then
        files=$(find . -name '*.c' ! -name '*-main.c')
        for file in $files; do
		betty-style $file > .tmp_betty.txt
		betty-doc $file > /dev/null 2>> .tmp_betty.txt 
		if [ -s .tmp_betty.txt ]; then
			betty $file
			rm .tmp_betty.txt 
			break
		fi
		rm .tmp_betty.txt 
        done
fi
