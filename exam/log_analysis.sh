#! /bin/bash
file='./app.log'
cut -d':' -f4 $file | sort |uniq -c | awk '{f=$1; $1 =" ";print; print ":"f; }'
#| awk '{f=$1; $1 =" "; $(NF+1) = f;print}' sholud work but it doesn't
