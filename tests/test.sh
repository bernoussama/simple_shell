#!/bin/env bash

# Betty test
echo "betty check"

betty ./*.c


# compile
echo "compile ..."
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 ./*.c -o bin/hsh

# /bin/ls test
echo "testing /bin/ls"

echo "/bin/ls" | ./bin/hsh

# test_ls test
echo "running test_ls"

printf "/bin/ls\n/bin/ls\n" > test_ls
cat test_ls | ./bin/hsh


# error meages test
echo "Testing error mesages"

echo "qwerty" | /bin/sh
# the error message of hsh should be the same as sh
echo "qwerty" | ./bin/hsh
