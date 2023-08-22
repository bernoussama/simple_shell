#!/bin/env bash

# Betty test
echo "betty check"

betty ./*.c


# compile
echo "compiling ..."
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 ./*.c -o ./bin/hsh

gcc_ret=$?
if [[ gcc_ret -eq 0 ]]; then
    echo "Compiled succesfully"

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

    echo "testing env ..."
    echo "env" | ./bin/hsh

    echo "testing exit ..."
    echo "exit" | ./bin/hsh
else
    echo "Compilation Failed!!"

fi
