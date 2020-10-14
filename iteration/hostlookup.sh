#!/bin/bash
#comments go here

for h in champlain.edu uvm.edu umd.edu doesnotexist.edu
do
  out=$(host -W2 -t A $h)
  if [ $? -eq 0 ]; then
    ip=$(echo $out | cut -d " " -f 4)
    echo $h - $ip
  else
    echo "${h} - not found"
  fi
done
