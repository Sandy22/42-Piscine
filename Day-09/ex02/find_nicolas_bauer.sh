#! /bin/sh

grep -i -e 'Nicolas Bauer' -e 'Bauer' -e 'N\tBauer' -e 'Nick * Bauer' $1 | awk '{print $(NF -1)}'
