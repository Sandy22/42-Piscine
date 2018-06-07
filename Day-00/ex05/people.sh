#! /bin/sh
ldapsearch -LLL "uid=z*" cn | sort -rf| grep -i 'cn:' | cut -c 5-
