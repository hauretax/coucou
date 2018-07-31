ldapsearch -xLLL '(uid=z*)' | grep cn: | sort -r --ignore-case | sed "s/.\{4\}//"
