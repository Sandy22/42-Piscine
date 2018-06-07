#! /nib/sh

touch -r bomb.txt -A '-000001' bomb.txt
#stat bomb.txt | awk '{print $9, $10, $11, $12}'
stat bomb.txt | awk '{print $9, $10, $11, $12}' | tr -d '\"'
