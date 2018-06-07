#! /bin/sh
ldapsearch -LLL uid=$(whoami) dn | grep -e "dn: " | cut -c 5- | tail -n 1
