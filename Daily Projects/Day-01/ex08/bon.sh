#! /bin/sh

ldapsearch -Q -LLL "sn=*bon*" cn | grep "cn:" | wc -l | awk '{$1=$1};1' | tr -d '\n'
