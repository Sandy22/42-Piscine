#! /bin/sh

ifconfig -a link | grep -e "ether " | cut -c 8-
