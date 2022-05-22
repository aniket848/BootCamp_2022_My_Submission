#! /usr/bin/bash

mkdir root
for i in {1..5}
 do
  mkdir root/dir_$i
  cd root/dir_$i
  touch file1.txt file2.txt file3.txt file4.txt
  echo -e "1" >> file1.txt
  echo -e "2 \n2" >> file2.txt 
  echo -e "3 \n3 \n3" >> file3.txt
  echo -e "4 \n4 \n4 \n4" >> file4.txt
  cd "$OLDPWD"
 done 