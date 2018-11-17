#!/bin/bash

FILE=words.txt
cat $FILE | tr -s ' ' '\n' | sort | uniq -c | sort -r | awk '{ print $2, $1 }'
